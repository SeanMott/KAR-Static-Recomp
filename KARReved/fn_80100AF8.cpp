//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800547E0.hpp"
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800D7AD0.hpp"



void fn_80100AF8(PPC::Runtime::GCContext* context)
{
/*80100AF8 000FD8F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80100AFC 000FD8FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80100B00 000FD900*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80100B04 000FD904*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80100B08 000FD908*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80100B0C 000FD90C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80100B10 000FD910*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80100B14 000FD914*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80100B18 000FD918*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*80100B1C 000FD91C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80100B20 000FD920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80100B24 000FD924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80100B28 000FD928*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80100B2C 000FD92C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*80100B30 000FD930*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*80100B34 000FD934*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80100B38 000FD938*/ PPC::Runtime::ASM::bne(.L_80100B90);
/*80100B3C 000FD93C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80100B40 000FD940*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80100B44 000FD944*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80100B48 000FD948*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80100B4C 000FD94C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80100B50 000FD950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*80100B54 000FD954*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80100B58 000FD958*/ PPC::Runtime::ASM::ble(.L_80100B68);
/*80100B5C 000FD95C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*80100B60 000FD960*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80100B64 000FD964*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80100B68, 0x80100B68) //this is a jump label
/*80100B68 000FD968*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80100B6C 000FD96C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80100B70 000FD970*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80100B74 000FD974*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80100B78 000FD978*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80100B7C 000FD97C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80100B80 000FD980*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80100B84 000FD984*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80100B88 000FD988*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80100B8C 000FD98C*/ PPC::Runtime::ASM::b(.L_80100BD0);
RUNTIME_PPC_JUMP_LABEL(.L_80100B90, 0x80100B90) //this is a jump label
/*80100B90 000FD990*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80100B94 000FD994*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80100B98 000FD998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80100B9C 000FD99C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/* 80100BA0 000FD9A0  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*80100BA4 000FD9A4*/ PPC::Runtime::ASM::beq(.L_80100BD0);
/*80100BA8 000FD9A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80100BAC 000FD9AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80100BB0 000FD9B0*/ PPC::Runtime::ASM::bgt(.L_80100BD0);
/*80100BB4 000FD9B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80100BB8 000FD9B8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 25, 25);
/*80100BBC 000FD9BC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*80100BC0 000FD9C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*80100BC4 000FD9C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*80100BC8 000FD9C8*/ PPC::Runtime::ASM::extrwi(context->r4, context->r0, 1, 25);
/*80100BCC 000FD9CC*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
RUNTIME_PPC_JUMP_LABEL(.L_80100BD0, 0x80100BD0) //this is a jump label
/*80100BD0 000FD9D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80100BD4 000FD9D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80100BD8 000FD9D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80100BDC 000FD9DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80100BE0 000FD9E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80100BE4 000FD9E4*/ PPC::Runtime::ASM::blr();
}