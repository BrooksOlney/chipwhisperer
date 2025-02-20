<<<<<<< HEAD
import logging

other_logger = logging.getLogger("ChipWhisperer Other")
target_logger = logging.getLogger("ChipWhisperer Target")
scope_logger = logging.getLogger("ChipWhisperer Scope")
naeusb_logger = logging.getLogger("ChipWhisperer NAEUSB")
tracewhisperer_logger = logging.getLogger("ChipWhisperer TraceWhisperer")
glitch_logger = logging.getLogger("ChipWhisperer Glitch")

chipwhisperer_loggers = [
    logging.getLogger("ChipWhisperer NAEUSB"),
    logging.getLogger("ChipWhisperer Other"),
    logging.getLogger("ChipWhisperer Target"),
    logging.getLogger("ChipWhisperer Scope"),
    logging.getLogger("ChipWhisperer TraceWhisperer"),
    logging.getLogger("ChipWhisperer Glitch")

]

def set_all_log_levels(level):
    for logger in chipwhisperer_loggers:
        logger.setLevel(level)

# logging.debug("Need to print this to have logging work right")
# set_all_log_levels(logging.WARNING)
logging.debug("WTF logging")

#initialize levels for loggers
for logger in chipwhisperer_loggers:
    if logger.level == logging.NOTSET:
        logger.setLevel(logging.WARNING)
=======
import logging
import os
import tempfile


log_dir = tempfile.gettempdir()

logging.basicConfig(level=logging.WARNING)
cw_formatter = logging.Formatter("(%(name)s %(levelname)s|File %(filename)s:%(lineno)d) %(message)s")

other_logger = logging.getLogger("ChipWhisperer Other")
target_logger = logging.getLogger("ChipWhisperer Target")
scope_logger = logging.getLogger("ChipWhisperer Scope")
naeusb_logger = logging.getLogger("ChipWhisperer NAEUSB")
tracewhisperer_logger = logging.getLogger("ChipWhisperer TraceWhisperer")
glitch_logger = logging.getLogger("ChipWhisperer Glitch")

chipwhisperer_loggers = [
    logging.getLogger("ChipWhisperer NAEUSB"),
    logging.getLogger("ChipWhisperer Other"),
    logging.getLogger("ChipWhisperer Target"),
    logging.getLogger("ChipWhisperer Scope"),
    logging.getLogger("ChipWhisperer TraceWhisperer"),
    logging.getLogger("ChipWhisperer Glitch")

]
for logger in chipwhisperer_loggers:
    logger.setLevel(logging.WARNING)
    strmhndlr = logging.StreamHandler()
    strmhndlr.setLevel(logging.DEBUG)
    strmhndlr.setFormatter(cw_formatter)
   
    try:
        os.makedirs(os.path.join(log_dir, "chipwhisperer/logs"), exist_ok=True)
    except FileExistsError:
        pass
    
    filehndlr = logging.FileHandler(os.path.join(log_dir, "chipwhisperer/logs", logger.name + ".log"), mode='w')
    filehndlr.setFormatter(cw_formatter)
    logger.propagate = False

    logger.handlers = [strmhndlr, filehndlr]

naeusb_logger.handlers[1].setLevel(logging.INFO) # only log info for this one, as files get big quickly

def set_all_log_levels(level):
    for logger in chipwhisperer_loggers:
        logger.handlers[0].setLevel(level)
>>>>>>> 472949068b6a25514b25f18da3e71c39b06c8fcc
