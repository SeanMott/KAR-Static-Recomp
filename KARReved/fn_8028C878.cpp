//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_8028B0D0.hpp"
#include "fn_8028B0D0.hpp"
#include "fn_8028EB80.hpp"
#include "fn_8028EA20.hpp"
#include "fn_8028E8C0.hpp"
#include "fn_8028E760.hpp"
#include "fn_8028E600.hpp"
#include "fn_8028E4A0.hpp"
#include "fn_8028E340.hpp"
#include "fn_803792B8.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8028E128.hpp"
#include "fn_8028CB8C.hpp"
#include "fn_8028CB8C.hpp"



void fn_8028C878(PPC::Runtime::GCContext* context)
{
/*8028C878 00289678*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8028C87C 0028967C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028C880 00289680*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028C884 00289684*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028C888 00289688*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028C88C 0028968C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 8028C890 00289690  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028C894 00289694*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028C898 00289698*/ PPC::Runtime::ASM::beq(.L_8028CB6C);
/*8028C89C 0028969C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE12C @ Get_MemoryOffset_HighBit);
/*8028C8A0 002896A0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4030);
/*8028C8A4 002896A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE12C @ Get_MemoryOffset_LowBit);
/*8028C8A8 002896A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028C8AC 002896AC*/ PPC::Runtime::ASM::beq(.L_8028C8F8);
/*8028C8B0 002896B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028C8B4 002896B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028C8B8 002896B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4030, context->r30));
/*8028C8BC 002896BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4040, context->r30));
/*8028C8C0 002896C0*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028C8C4 002896C4*/ PPC::Runtime::ASM::beq(.L_8028C8D0);
/*8028C8C8 002896C8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028C8CC 002896CC*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028C8D0, 0x8028C8D0) //this is a jump label
/*8028C8D0 002896D0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4030);
/*8028C8D4 002896D4*/ PPC::Runtime::ASM::beq(.L_8028C8F8);
/*8028C8D8 002896D8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028C8DC 002896DC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4030);
/*8028C8E0 002896E0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028C8E4 002896E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4030, context->r30));
/*8028C8E8 002896E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4030, context->r30));
/*8028C8EC 002896EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028C8F0 002896F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028C8F4 002896F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028C8F8, 0x8028C8F8) //this is a jump label
/*8028C8F8 002896F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4020);
/*8028C8FC 002896FC*/ PPC::Runtime::ASM::beq(.L_8028C928);
/*8028C900 00289700*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE0A0 @ Get_MemoryOffset_HighBit);
/*8028C904 00289704*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4020);
/*8028C908 00289708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE0A0 @ Get_MemoryOffset_LowBit);
/*8028C90C 0028970C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4020, context->r30));
/*8028C910 00289710*/ PPC::Runtime::ASM::beq(.L_8028C928);
/*8028C914 00289714*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE078 @ Get_MemoryOffset_HighBit);
/*8028C918 00289718*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028C91C 0028971C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE078 @ Get_MemoryOffset_LowBit);
/*8028C920 00289720*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4020, context->r30));
/*8028C924 00289724*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028C928, 0x8028C928) //this is a jump label
/*8028C928 00289728*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3fe4);
/*8028C92C 0028972C*/ PPC::Runtime::ASM::beq(.L_8028C9A8);
/*8028C930 00289730*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE050 @ Get_MemoryOffset_HighBit);
/*8028C934 00289734*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0x3fe8);
/*8028C938 00289738*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE050 @ Get_MemoryOffset_LowBit);
/*8028C93C 0028973C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fe4, context->r30));
/*8028C940 00289740*/ PPC::Runtime::ASM::beq(.L_8028C98C);
/*8028C944 00289744*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE028 @ Get_MemoryOffset_HighBit);
/*8028C948 00289748*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE028 @ Get_MemoryOffset_LowBit);
/*8028C94C 0028974C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fe8, context->r30));
/*8028C950 00289750*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fec, context->r30));
/*8028C954 00289754*/ PPC::Runtime::ASM::bl(fn_HSD_TObjRemoveAll);
/*8028C958 00289758*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028C95C 0028975C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x20);
/*8028C960 00289760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fec, context->r30));
/*8028C964 00289764*/ PPC::Runtime::ASM::bl(fn_8028B0D0);
/*8028C968 00289768*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8);
/*8028C96C 0028976C*/ PPC::Runtime::ASM::bl(fn_8028B0D0);
/*8028C970 00289770*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028C974 00289774*/ PPC::Runtime::ASM::beq(.L_8028C98C);
/*8028C978 00289778*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE000 @ Get_MemoryOffset_HighBit);
/*8028C97C 0028977C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028C980 00289780*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE000 @ Get_MemoryOffset_LowBit);
/*8028C984 00289784*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fe8, context->r30));
/*8028C988 00289788*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028C98C, 0x8028C98C) //this is a jump label
/*8028C98C 0028978C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3fe4);
/*8028C990 00289790*/ PPC::Runtime::ASM::beq(.L_8028C9A8);
/*8028C994 00289794*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDFD8 @ Get_MemoryOffset_HighBit);
/*8028C998 00289798*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028C99C 0028979C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDFD8 @ Get_MemoryOffset_LowBit);
/*8028C9A0 002897A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fe4, context->r30));
/*8028C9A4 002897A4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028C9A8, 0x8028C9A8) //this is a jump label
/*8028C9A8 002897A8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3fc4);
/*8028C9AC 002897AC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9B0 002897B0*/ PPC::Runtime::ASM::bl(fn_8028EB80);
/*8028C9B4 002897B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3fa8);
/*8028C9B8 002897B8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9BC 002897BC*/ PPC::Runtime::ASM::bl(fn_8028EA20);
/*8028C9C0 002897C0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3f90);
/*8028C9C4 002897C4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9C8 002897C8*/ PPC::Runtime::ASM::bl(fn_8028E8C0);
/*8028C9CC 002897CC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3f74);
/*8028C9D0 002897D0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9D4 002897D4*/ PPC::Runtime::ASM::bl(fn_8028E760);
/*8028C9D8 002897D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3f58);
/*8028C9DC 002897DC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9E0 002897E0*/ PPC::Runtime::ASM::bl(fn_8028E600);
/*8028C9E4 002897E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3f38);
/*8028C9E8 002897E8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9EC 002897EC*/ PPC::Runtime::ASM::bl(fn_8028E4A0);
/*8028C9F0 002897F0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3f1c);
/*8028C9F4 002897F4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028C9F8 002897F8*/ PPC::Runtime::ASM::bl(fn_8028E340);
/*8028C9FC 002897FC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3e80);
/*8028CA00 00289800*/ PPC::Runtime::ASM::beq(.L_8028CAEC);
/*8028CA04 00289804*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDFB0 @ Get_MemoryOffset_HighBit);
/*8028CA08 00289808*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0x3ee0);
/*8028CA0C 0028980C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDFB0 @ Get_MemoryOffset_LowBit);
/*8028CA10 00289810*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e80, context->r30));
/*8028CA14 00289814*/ PPC::Runtime::ASM::beq(.L_8028CA60);
/*8028CA18 00289818*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028CA1C 0028981C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028CA20 00289820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ee0, context->r30));
/*8028CA24 00289824*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ef0, context->r30));
/*8028CA28 00289828*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028CA2C 0028982C*/ PPC::Runtime::ASM::beq(.L_8028CA38);
/*8028CA30 00289830*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028CA34 00289834*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028CA38, 0x8028CA38) //this is a jump label
/*8028CA38 00289838*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CA3C 0028983C*/ PPC::Runtime::ASM::beq(.L_8028CA60);
/*8028CA40 00289840*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028CA44 00289844*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CA48 00289848*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028CA4C 0028984C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ee0, context->r30));
/*8028CA50 00289850*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CA54 00289854*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CA58 00289858*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CA5C 0028985C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CA60, 0x8028CA60) //this is a jump label
/*8028CA60 00289860*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0x3e94);
/*8028CA64 00289864*/ PPC::Runtime::ASM::beq(.L_8028CAA8);
/*8028CA68 00289868*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8028CA6C 0028986C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CA70 00289870*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8028CA74 00289874*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028CA78 00289878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e94, context->r30));
/*8028CA7C 0028987C*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8028CA80 00289880*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CA84 00289884*/ PPC::Runtime::ASM::beq(.L_8028CAA8);
/*8028CA88 00289888*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8028CA8C 0028988C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CA90 00289890*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8028CA94 00289894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e94, context->r30));
/*8028CA98 00289898*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CA9C 0028989C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CAA0 002898A0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CAA4 002898A4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CAA8, 0x8028CAA8) //this is a jump label
/*8028CAA8 002898A8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3e84);
/*8028CAAC 002898AC*/ PPC::Runtime::ASM::beq(.L_8028CAD0);
/*8028CAB0 002898B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e84, context->r30));
/*8028CAB4 002898B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028CAB8 002898B8*/ PPC::Runtime::ASM::beq(.L_8028CAD0);
/*8028CABC 002898BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028CAC0 002898C0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028CAC4 002898C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028CAC8 002898C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CACC 002898CC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CAD0, 0x8028CAD0) //this is a jump label
/*8028CAD0 002898D0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3e80);
/*8028CAD4 002898D4*/ PPC::Runtime::ASM::beq(.L_8028CAEC);
/*8028CAD8 002898D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF04 @ Get_MemoryOffset_HighBit);
/*8028CADC 002898DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028CAE0 002898E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDF04 @ Get_MemoryOffset_LowBit);
/*8028CAE4 002898E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e80, context->r30));
/*8028CAE8 002898E8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028CAEC, 0x8028CAEC) //this is a jump label
/*8028CAEC 002898EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3de8);
/*8028CAF0 002898F0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028CAF4 002898F4*/ PPC::Runtime::ASM::bl(fn_8028E128);
/*8028CAF8 002898F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x20);
/*8028CAFC 002898FC*/ PPC::Runtime::ASM::beq(.L_8028CB28);
/*8028CB00 00289900*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDEE4 @ Get_MemoryOffset_HighBit);
/*8028CB04 00289904*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x20);
/*8028CB08 00289908*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDEE4 @ Get_MemoryOffset_LowBit);
/*8028CB0C 0028990C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8028CB10 00289910*/ PPC::Runtime::ASM::beq(.L_8028CB28);
/*8028CB14 00289914*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDEC0 @ Get_MemoryOffset_HighBit);
/*8028CB18 00289918*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028CB1C 0028991C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDEC0 @ Get_MemoryOffset_LowBit);
/*8028CB20 00289920*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8028CB24 00289924*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028CB28, 0x8028CB28) //this is a jump label
/*8028CB28 00289928*/ PPC::Runtime::ASM::lis(context->r4, fn_8028CB8C @ Get_MemoryOffset_HighBit);
/*8028CB2C 0028992C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8028CB30 00289930*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028CB8C @ Get_MemoryOffset_LowBit);
/*8028CB34 00289934*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8028CB38 00289938*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8028CB3C 0028993C*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*8028CB40 00289940*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028CB44 00289944*/ PPC::Runtime::ASM::beq(.L_8028CB5C);
/*8028CB48 00289948*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDEA0 @ Get_MemoryOffset_HighBit);
/*8028CB4C 0028994C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028CB50 00289950*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDEA0 @ Get_MemoryOffset_LowBit);
/*8028CB54 00289954*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028CB58 00289958*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028CB5C, 0x8028CB5C) //this is a jump label
/*8028CB5C 0028995C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028CB60 00289960*/ PPC::Runtime::ASM::ble(.L_8028CB6C);
/*8028CB64 00289964*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028CB68 00289968*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028CB6C, 0x8028CB6C) //this is a jump label
/*8028CB6C 0028996C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028CB70 00289970*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028CB74 00289974*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028CB78 00289978*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028CB7C 0028997C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028CB80 00289980*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028CB84 00289984*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8028CB88 00289988*/ PPC::Runtime::ASM::blr();
}