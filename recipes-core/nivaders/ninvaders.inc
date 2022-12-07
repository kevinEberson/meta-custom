LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit autotools-brokensep
DEPENDS = "ncurses"

EXTRA_OEMAKE = "-e"
CFLAGS += "-fcommon"

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/nInvaders ${D}${bindir}
}

FILES_${PN} = "${bindir}/*"
