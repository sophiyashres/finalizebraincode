QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Braincode.cpp \
    level1.cpp \
    level10.cpp \
    level11.cpp \
    level12.cpp \
    level13.cpp \
    level14.cpp \
    level15.cpp \
    level2.cpp \
    level3.cpp \
    level4.cpp \
    level5.cpp \
    level6.cpp \
    level7.cpp \
    level8.cpp \
    level9.cpp \
    levelpg1.cpp \
    main.cpp \
    score.cpp
HEADERS += \
    Braincode.h \
    level1.h \
    level10.h \
    level11.h \
    level12.h \
    level13.h \
    level14.h \
    level15.h \
    level2.h \
    level3.h \
    level4.h \
    level5.h \
    level6.h \
    level7.h \
    level8.h \
    level9.h \
    levelpg1.h \
    score.h


FORMS += \
    Braincode.ui \
    level1.ui \
    level10.ui \
    level11.ui \
    level12.ui \
    level13.ui \
    level14.ui \
    level15.ui \
    level2.ui \
    level3.ui \
    level4.ui \
    level5.ui \
    level6.ui \
    level7.ui \
    level8.ui \
    level9.ui \
    levelpg1.ui \
    score.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
