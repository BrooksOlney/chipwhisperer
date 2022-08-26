<<<<<<< HEAD
#!/usr/bin/env python

from setuptools import setup, find_packages

setup(
    name='chipwhisperer',
    version='5.6.1',
    description="ChipWhisperer Side-Channel Analysis Tool",
    long_description=open('README.md').read(),
    long_description_content_type='text/markdown',
    author="Colin O'Flynn",
    author_email='coflynn@newae.com',
    license='GPLv3',
    url='https://www.chipwhisperer.com',
    packages=find_packages('software'),
    package_dir={'': 'software'},
    package_data={'': ['py.typed']},
    install_requires=[
        'configobj',
        'pyserial',
        'numpy',
        'libusb1',
        'ECpy',
        'fastdtw',
        'Cython',
        'tqdm',
    ],
    project_urls={
        'Documentation': 'https://chipwhisperer.readthedocs.io',
        'Source': 'https://github.com/newaetech/chipwhisperer',
        'Issue Tracker': 'https://github.com/newaetech/chipwhisperer/issues',
    },
    python_requires='~=3.7',
)
=======
#!/usr/bin/env python

from setuptools import setup, find_packages

setup(
    name='chipwhisperer',
    version='5.6.1',
    description="ChipWhisperer Side-Channel Analysis Tool",
    long_description=open('README.md').read(),
    long_description_content_type='text/markdown',
    author="Colin O'Flynn",
    author_email='coflynn@newae.com',
    license='GPLv3',
    url='https://www.chipwhisperer.com',
    packages=find_packages('software'),
    package_dir={'': 'software'},
    package_data={'': ['py.typed', 'capture/trace/defines/*.v']},
    install_requires=[
        'configobj',
        'pyserial',
        'numpy',
        'libusb1',
        'ECpy',
        'fastdtw',
        'Cython',
        'tqdm',
    ],
    project_urls={
        'Documentation': 'https://chipwhisperer.readthedocs.io',
        'Source': 'https://github.com/newaetech/chipwhisperer',
        'Issue Tracker': 'https://github.com/newaetech/chipwhisperer/issues',
    },
    python_requires='~=3.7',
)
>>>>>>> 472949068b6a25514b25f18da3e71c39b06c8fcc
