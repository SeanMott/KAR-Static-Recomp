//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007CE54.hpp"
#include "fn_80062660.hpp"



void fn_80062B1C(PPC::Runtime::GCContext* context)
{
/*80062B1C 0005F91C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80062B20 0005F920*/ PPC::Runtime::ASM::mflr(context->r0);
/*80062B24 0005F924*/ PPC::Runtime::ASM::mr(context->r12, context->r3);
/*80062B28 0005F928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80062B2C 0005F92C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80062B30 0005F930*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80062B34 0005F934*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80062B38 0005F938*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80062B3C 0005F93C*/ PPC::Runtime::ASM::bctrl();
/*80062B40 0005F940*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*80062B44 0005F944*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80062B48 0005F948*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*80062B4C 0005F94C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_HighBit);
/*80062B50 0005F950*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80062B54 0005F954*/ PPC::Runtime::ASM::addi(context->r30, context->r4, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_LowBit);
/*80062B58 0005F958*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 2);
/*80062B5C 0005F95C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80062B60 0005F960*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80062B64 0005F964*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80062B68 0005F968*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80062B6C 0005F96C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80062B70 0005F970*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*80062B74 0005F974*/ PPC::Runtime::ASM::bl(fn___cvt_dbl_usll);
/*80062B78 0005F978*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_HighBit);
/*80062B7C 0005F97C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80062B80 0005F980*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_LowBit);
/*80062B84 0005F984*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80062B88 0005F988*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*80062B8C 0005F98C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80062B90 0005F990*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80062B94 0005F994*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80062B98 0005F998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80062B9C 0005F99C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80062BA0 0005F9A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*80062BA4 0005F9A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
/*80062BA8 0005F9A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80062BAC, 0x80062BAC) //this is a jump label
/*80062BAC 0005F9AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x34);
/*80062BB0 0005F9B0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x54);
/*80062BB4 0005F9B4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80062BB8 0005F9B8*/ PPC::Runtime::ASM::bl(fn_803D792C);
/*80062BBC 0005F9BC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80062BC0 0005F9C0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x24);
/*80062BC4 0005F9C4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*80062BC8 0005F9C8*/ PPC::Runtime::ASM::blt(.L_80062BAC);
/*80062BCC 0005F9CC*/ PPC::Runtime::ASM::bl(fn_8007CE54);
/*80062BD0 0005F9D0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_HighBit);
/*80062BD4 0005F9D4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80062BD8 0005F9D8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_LowBit);
/*80062BDC 0005F9DC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80062BE0 0005F9E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80062BE4 0005F9E4*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*80062BE8 0005F9E8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80062BEC 0005F9EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80062BF0 0005F9F0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80062BF4 0005F9F4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80062BF8 0005F9F8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*80062BFC 0005F9FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*80062C00 0005FA00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80062C04 0005FA04*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 2);
/*80062C08 0005FA08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80062C0C 0005FA0C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80062C10 0005FA10*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80062C14 0005FA14*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*80062C18 0005FA18*/ PPC::Runtime::ASM::bl(fn___cvt_dbl_usll);
/*80062C1C 0005FA1C*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_HighBit);
/*80062C20 0005FA20*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BYTE4_COUNT_180550CA8 @ Get_MemoryOffset_LowBit);
/*80062C24 0005FA24*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*80062C28 0005FA28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*80062C2C 0005FA2C*/ PPC::Runtime::ASM::bl(fn_80062660);
/*80062C30 0005FA30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80062C34 0005FA34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80062C38 0005FA38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80062C3C 0005FA3C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80062C40 0005FA40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80062C44 0005FA44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80062C48 0005FA48*/ PPC::Runtime::ASM::blr();
}