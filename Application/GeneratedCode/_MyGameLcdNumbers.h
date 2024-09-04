/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.05
* Profile  : STM32
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

/* Bitmap resource for displaying the numbers within a simulated LCD. */
EW_DEFINE_BITMAP_RES( MyGameLcdNumbers )
  EW_BITMAP_FRAMES( MyGameLcdNumbers, Default, EW_DRIVER_VARIANT_ALPHA8, 17, 24, 0 )
    EW_BITMAP_FRAME( 7, 3, 6, 1, 0x00000000, 0x00000000 ),
    EW_BITMAP_FRAME( 11, 7, 1, 4, 0x0000013C, 0x00000000 ),
    EW_BITMAP_FRAME( 7, 3, 6, 1, 0x000001F4, 0x00000000 ),
    EW_BITMAP_FRAME( 5, 12, 7, 1, 0x000002FC, 0x00000000 ),
    EW_BITMAP_FRAME( 5, 12, 6, 1, 0x00000408, 0x00000000 ),
    EW_BITMAP_FRAME( 7, 3, 7, 1, 0x00000508, 0x00000000 ),
    EW_BITMAP_FRAME( 7, 3, 7, 1, 0x00000610, 0x00000000 ),
    EW_BITMAP_FRAME( 7, 3, 6, 1, 0x00000734, 0x00000000 ),
    EW_BITMAP_FRAME( 7, 3, 6, 1, 0x000007F8, 0x00000000 ),
    EW_BITMAP_FRAME( 7, 3, 7, 1, 0x00000938, 0x00000000 ),
    EW_BITMAP_FRAME( 6, 12, 6, 1, 0x00000A68, 0x00000000 )
    EW_BITMAP_MAPPING( MyGameLcdNumbers, Default )

  EW_BITMAP_PIXEL( MyGameLcdNumbers, Default )                  /* ratio 61.50 % */
    0x1C080100, 0xC1A0B048, 0x20060300, 0x2190C048, 0x02020202, 0x60600C0C, 0x184CA607,
    0x74B26E33, 0x19410144, 0x1BFD9C9F, 0xB11FD249, 0x72261F52, 0x99A9D781, 0xC73071B9,
    0x2CB64AA5, 0x7C0340C3, 0xD20B69FE, 0x1DCF85E2, 0x7AA9FEB2, 0xA801D030, 0x0E52CA7F,
    0xDFEDE144, 0x350303A1, 0x8A87FAF8, 0x420140A8, 0x333BFDEE, 0x6C8A6060, 0x182112FF,
    0xBFCC8038, 0x0224467A, 0xDE645008, 0x016A32BF, 0x0FF43818, 0x5F820BDC, 0x41D3B1FE,
    0x7FA780F0, 0x15A830C4, 0x9416E6A0, 0xD80B7106, 0x81291558, 0x8264065A, 0xD130202C,
    0x482A04C0, 0x70AC0C0C, 0xB8955D6C, 0xB2A04C01, 0x8BA085A7, 0x8104FF6F, 0x1DEFF31E,
    0xDF6D8211, 0xE889B80A, 0x1315371F, 0x67A3FCCB, 0x54036084, 0x240A6D80, 0xB75FE830,
    0x24390415, 0xC18A37FB, 0xFEA306C0, 0x2010DB0D, 0xE7176CC0, 0x0CA201FE, 0x64060040,
    0xA9DD34FA, 0x9B8E9E43, 0x74C0FF6A, 0x5A827B5D, 0x47246E2B, 0xEE44D3AE, 0x20816CC7,
    0x87EB791E, 0x7FFF7FAF, 0x9D41B0D1, 0x90100140, 0x244C12C2, 0x4512E0A8, 0x5AD71058,
    0x50441D13, 0x00000040, 0x1C080100, 0x41A0B048, 0x10080281, 0x01009048, 0x0E010181,
    0x2981FC0A, 0x8C4DA653, 0x08901062, 0x7FB44540, 0x62EDECFF, 0x006240C4, 0x79A84201,
    0x538E3513, 0x12028E01, 0xED92487C, 0x1C8D9DDF, 0xF7C14A05, 0x9C808ACF, 0xF9C40600,
    0xC4474ED7, 0xFD280A9C, 0x2802668B, 0xFEB60A00, 0xB4E09AD1, 0x967FB202, 0xF04D3812,
    0x9F9A1864, 0x28826339, 0xC72C0353, 0xA1944201, 0xC114E183, 0x3ED37FA5, 0x61589598,
    0x54593FD7, 0xF6A89A81, 0xA70211EF, 0x9BFDD639, 0x00680033, 0x41F4FF2D, 0xCEC00A71,
    0x1834723F, 0xCD27991F, 0x08015383, 0xC05A30B4, 0x97832138, 0x0406258C, 0x1C080100,
    0xC1A0B048, 0x24080400, 0x0110C858, 0x0A020181, 0xB144C8DA, 0x974DA662, 0x3828248E,
    0x8FBFD9A2, 0x2319FD20, 0x806081E5, 0x99A23E01, 0x5C72C71B, 0x32CB642A, 0xC0801414,
    0x38178B83, 0xA7FAC477, 0x834181EA, 0x3BFDBC28, 0x49A7E074, 0x9DFEF721, 0xA0746019,
    0xECFF3080, 0x54D00919, 0xFF418160, 0x1828BDC2, 0x0B0400A0, 0xE0602B60, 0x0658CFF4,
    0x080200AA, 0x17A6D0E0, 0x88C361B1, 0x8CF50B09, 0x07B40253, 0x07F23052, 0x3ABCA412,
    0x9C0C0A20, 0xA9588BE0, 0x0F12C161, 0x42A5C5AB, 0xFEDF1741, 0x018B11E9, 0x040805C3,
    0x5815A004, 0x32BFDE64, 0x28060555, 0x919E8FF3, 0x600800D0, 0x7502B6ED, 0x86FF5183,
    0x96A0086D, 0x02824476, 0xA7D32030, 0xDF9D4EE9, 0xB830A276, 0xB504FA2D, 0x96FADC56,
    0x336052C6, 0xBC8F1000, 0x9D47C3F5, 0x2568BFFA, 0xB148124C, 0xEFF78984, 0x34C8884B,
    0xC0F69559, 0x00000080, 0x1C080100, 0x41A0B048, 0x24080401, 0x0110C858, 0x0A010181,
    0x2984E926, 0x9C8B4593, 0x5028D51E, 0x7FB8C6D0, 0x0BE24320, 0xC1020906, 0x6CA60500,
    0x1C6E372B, 0xC0A36EB9, 0x5050529D, 0x2E118280, 0x6180BC5E, 0x40BFDAA4, 0x0C160C07,
    0x3F9F2470, 0x12840330, 0x9FE67014, 0x951120BC, 0xE890340A, 0x5215B75F, 0xF5704207,
    0xA88597EF, 0x80080400, 0x8C4642C0, 0xEC703018, 0x0169D7FA, 0x4C400441, 0x7747138D,
    0xC659381C, 0xB82010DE, 0xBFC85340, 0x10D51AD9, 0x0680B040, 0x293CA139, 0xD90A550E,
    0x07431DB8, 0xA0D05010, 0x88088301, 0x913365FE, 0x56032055, 0xE86180FF, 0xB303C00C,
    0x76DC9E7F, 0xDFEE517E, 0x03278E1E, 0xB11B1004, 0x597FBDC9, 0xB0140F08, 0x3A9D8980,
    0x49E0E5C0, 0x58076F37, 0xFDE874DE, 0xD44DF7FD, 0xD52712B3, 0xAF87EBD4, 0xC37FF57A,
    0x5C2834B0, 0x2612C943, 0x092BC1E0, 0x40B740F2, 0xCB6400B0, 0x20304F3E, 0x1C080100,
    0xC160B048, 0x24000100, 0x21702834, 0x482C0180, 0x70A87010, 0x081C8580, 0xC4401206,
    0x8201058C, 0xEAE05606, 0x84206054, 0x653AFF54, 0xD8E1F86C, 0x05253EBF, 0x4FF62876,
    0x01818294, 0xD7EBEC98, 0x18C0C045, 0x3201FEE2, 0x9B007030, 0x2C7CF07F, 0x5FEF89CC,
    0x1A0881CF, 0x6286D3FD, 0xFF3380A0, 0x182101DE, 0x5DBFD601, 0x58221615, 0x89DBEFF4,
    0x343F0984, 0xC189B7FB, 0xFEB30640, 0x84D2BB01, 0x5F251309, 0x13D3FDB8, 0x4B034013,
    0xC3E5CCD6, 0x3D1F3847, 0x38A4CD64, 0xD381B024, 0xEF90C7BF, 0xA2640AFD, 0x5A0A0120,
    0x7CD9D4EC, 0x68B55267, 0x500E0E1D, 0x83F4A028, 0x5574FF57, 0x84105860, 0x12977FB4,
    0x234826B0, 0x1F3B3FDD, 0x72942B67, 0x9F159FEF, 0xF9C809BA, 0x45072EC7, 0xFD260686,
    0xF7595683, 0x6AFF2EC3, 0x400E7049, 0x7D380280, 0x601F5288, 0xEA6E41E0, 0x00020306,
    0x1C080100, 0xC1A0B048, 0x24080300, 0x4110C858, 0x03030142, 0x2981D818, 0x9A8BC593,
    0x28290534, 0x7FB393E3, 0x8BFE4320, 0x00608215, 0x353AF02E, 0xA5AE3733, 0x04194C39,
    0x80681804, 0x416D3FCF, 0xE178BC5A, 0x02044522, 0xFA801D05, 0x4183ECA7, 0xFD7C1A83,
    0x68E0F543, 0xFED914C1, 0x34E03A21, 0xFF791162, 0x2AA80CC8, 0x7F980030, 0xA85494EB,
    0x8482C160, 0xE60B1003, 0x582AE6D9, 0x88C361B1, 0x21A3EB09, 0x2501C0AD, 0x0913E924,
    0x0D9F1E52, 0x200A0733, 0xB05888D1, 0x9976C3C3, 0x20A5A6EA, 0x301504C2, 0xC190B860,
    0x4679BFCC, 0x70240AB8, 0x16375FE8, 0x4030019A, 0x8698CFF5, 0xFD921CD0, 0x31C0D533,
    0x01B00144, 0x6FF738B8, 0x02820150, 0x5398EC0E, 0x361D37A7, 0xD985FECF, 0x95F7302A,
    0x55D77C72, 0xB023F702, 0xFEE62840, 0xFD3E9BE1, 0x1A31B41F, 0xA1600B9C, 0xEF930964,
    0xB11497DF, 0xF9401CE0, 0x02030483, 0x1C080100, 0xC1A0B048, 0x20080400, 0x2190C048,
    0x06040182, 0x00700C0C, 0x188BA648, 0xE4CA6D33, 0x510D60A3, 0x1C89FECD, 0x87958FF9,
    0x80050300, 0x99A9D789, 0xCD3071B9, 0x0020BA4D, 0x7F03C0A5, 0xD1FB5DFE, 0x170BC5E2,
    0x28102029, 0xBFD480F8, 0x1A0C1D63, 0x5FEC10DC, 0x0B4A0729, 0xEFF6E8B6, 0x04A881D0,
    0x37FBDC97, 0x005626C6, 0xDB91FE64, 0x0C462322, 0x0C202D19, 0x40600AF0, 0xBAC0671C,
    0x7747138D, 0x6C16299C, 0x24D9941B, 0x7648A48F, 0xC5783885, 0x281D0CA0, 0x813D884F,
    0xDCEBC512, 0xC2308215, 0x80B3FBFD, 0x0E060341, 0x5783FCD4, 0x7A922084, 0x2C10C2FF,
    0x371FE8B0, 0xFCD31315, 0xA0843793, 0x88FF5603, 0xE0581865, 0xA86D3FD0, 0x19087A07,
    0x07C0C16A, 0xCB01FEA7, 0x00802010, 0xFDD03000, 0x801433EB, 0xF2CB0C80, 0xA753B26D,
    0xD5371D3A, 0x0E3975FE, 0x6A0A4020, 0x5C92A8AC, 0x0F1C49A7, 0x7D1C21AF, 0x7DAF87EB,
    0xD0D07FFB, 0x8029B068, 0x4C258A80, 0x525FEBF2, 0xB65B02A4, 0x10141107, 0x1C080100,
    0x41A0B048, 0x24080401, 0x0110C858, 0x0A010181, 0x2984E91E, 0x9C8B4593, 0x5028E122,
    0x7FB8C6B0, 0x23E64320, 0xC1024956, 0x6CA60500, 0x1C6E372B, 0xB8A67039, 0x50506AB9,
    0x2E118280, 0x6180B85E, 0x43BFDA44, 0x0C160C07, 0xBFDF0450, 0x9E840333, 0x5EAFF32C,
    0x054A8891, 0x0FF4201A, 0x03A88B9C, 0x17FAB01F, 0xA8D4030C, 0x03FD7C10, 0x40AB00B5,
    0xD17A4604, 0xC05588E1, 0x76610E01, 0x83AB6D24, 0x661EBB18, 0xF4301001, 0xBC8A1B6F,
    0x1BFD520D, 0x072F2196, 0x3144FF65, 0x23E2EBC8, 0x0351B620, 0x0FF79928, 0x69AC5CCC,
    0x1AF9069A, 0x6F394775, 0x300AF22A, 0x49928500, 0x181A05D1, 0x2034ABC8, 0x1C080100,
    0xC1A0B048, 0x24080300, 0x0110C858, 0x06010181, 0x03B03006, 0x188BA653, 0xA23A5937,
    0x4F8CA080, 0x1C89FECE, 0xA9588FE9, 0xC0B9120F, 0xDCCCD4EB, 0x52E397B8, 0x61965B25,
    0xFF3E01A0, 0xF16905B4, 0x590EE7A2, 0x183D54FF, 0x3FD400E8, 0xA2072865, 0xD0EFF6F0,
    0x7C1A8181, 0x543543FD, 0xF72100A0, 0x30199DFE, 0xA6B64530, 0xF98EAD4F, 0x4448CF57,
    0xCC8A0100, 0x804637FB, 0xC0FF43CD, 0xE60890BD, 0x322DB91F, 0x3180C462, 0x623FD463,
    0x680ECE18, 0xB7580CE3, 0x21C4E271, 0x920C560E, 0xC80CB382, 0x72378A6C, 0x484EB964,
    0x70AC0C0C, 0x4F281D2C, 0x22813DA0, 0x171E4C25, 0xFDBE2E82, 0x4180B41B, 0xCE0E0603,
    0x845783FC, 0x657FDAA0, 0xCB801608, 0x32C4854D, 0x2119E8FF, 0xDFD500C8, 0x0C09029A,
    0x056DD7FA, 0xFEC90E41, 0xB030628D, 0x1B61DF81, 0xEB700402, 0x403FDCE2, 0x4062AC04,
    0x9DD34FA6, 0xB8E9E83A, 0x0C0FF6A9, 0xA827B457, 0xF956E2B5, 0xE44D3ADF, 0x0815B87E,
    0x7EB791E2, 0xE01804F8, 0x91B0D13F, 0x1001409D, 0x4C12C290, 0x12E0E834, 0x16705845,
    0x34110682, 0x01010021, 0x1C080100, 0xC1A0B048, 0x20080300, 0x2190C048, 0x04040202,
    0xA3A03C10, 0x188BA652, 0x62225D37, 0x4F0C6080, 0x1C89FEC7, 0x24D82FF9, 0x6005030E,
    0x990A1791, 0xC93071B9, 0x4CD6029D, 0x790340C3, 0xD20B75FE, 0x1DCF85E2, 0x8AB9FEAF,
    0xA701B030, 0x1040CC7F, 0xDFEDC13C, 0x31030422, 0x0AA7FAEC, 0x3F00C0C2, 0x4353FDE8,
    0x13806040, 0x3A35FED7, 0x3FCBF570, 0x0A24497B, 0xDFEF020C, 0x0800B51A, 0x2E47FA04,
    0x5C818046, 0x22F395FE, 0x180C4623, 0x4BFD3C32, 0x15607366, 0x8DB8BB60, 0x9C78C713,
    0x149561B0, 0x602005DC, 0x247C9C81, 0xC5039645, 0x01C0E3A4, 0xF280C211, 0xA8D41A44,
    0x14BCF360, 0x8080200C, 0x180D0682, 0x2FF32034, 0x0683119E, 0xC9D2100B, 0x05C17702,
    0x2B19FEA5, 0x06A05BEC, 0x354CFF63, 0x80512D58, 0xCC2B0073, 0x80541BFD, 0x3B0380A0,
    0x4ED9D4E6, 0x7FB3CDC7, 0x34A40663, 0x665C6530, 0x05C69B77, 0x09B02C99, 0xE2F87FB9,
    0x6D47FFC7, 0x0300710D, 0xC2592858, 0x25FF7FA4, 0x17006046, 0x6005EC00, 0xB15E81A0,
    0x00001017, 0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0x40181C4A,
    0x160A8300, 0x3068542C, 0x01418040, 0x2AA49810, 0x31586C36, 0x1C1E5158, 0x9FEE520C,
    0x58D397CB, 0x65F08C7C, 0xC160B097, 0xB1AA5186, 0x00C14020, 0xC0440C03, 0x8282B440,
    0x2A93138E, 0xA9B4CA5D, 0x01018153, 0x00000000

  EW_BITMAP_CLUT_EMPTY( MyGameLcdNumbers, Default )

  EW_BITMAPS_TABLE( MyGameLcdNumbers )
    EW_BITMAP( MyGameLcdNumbers, Default )
EW_END_OF_BITMAP_RES( MyGameLcdNumbers )

/* Embedded Wizard */
