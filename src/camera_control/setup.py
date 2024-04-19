from setuptools import find_packages, setup

package_name = "camera_control"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="addinedu",
    maintainer_email="cheun0928@naver.com",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            'camera_controller = camera_control.camera_controller:main',
            'video_recorder_server = camera_control.video_recorder_server:main',
            'video_recorder_client = camera_control.video_recorder_client:main',
            'image_capture_server = camera_control.image_capture_server:main',
            'service_client = camera_control.service_client:main'
        ],
    },
)
