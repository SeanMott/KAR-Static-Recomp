//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B57F4.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"



void fn_802C5F14(PPC::Runtime::GCContext* context)
{
/*802C5F14 002C2D14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802C5F18 002C2D18*/ PPC::Runtime::ASM::mflr(context->r0);
/*802C5F1C 002C2D1C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804CFD4C @ Get_MemoryOffset_HighBit);
/*802C5F20 002C2D20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C5F24 002C2D24*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804CFD4C @ Get_MemoryOffset_LowBit);
/*802C5F28 002C2D28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802C5F2C 002C2D2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802C5F30 002C2D30*/ PPC::Runtime::ASM::bl(fn_802B57F4);
/*802C5F34 002C2D34*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BBC80 @ Get_MemoryOffset_HighBit);
/*802C5F38 002C2D38*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BBC80 @ Get_MemoryOffset_LowBit);
/*802C5F3C 002C2D3C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802C5F40 002C2D40*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x10);
/*802C5F44 002C2D44*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x58);
/*802C5F48 002C2D48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802C5F4C 002C2D4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802C5F50 002C2D50*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C5F54 002C2D54*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802C5F58 002C2D58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C5F5C 002C2D5C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E356C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C5F60 002C2D60*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*802C5F64 002C2D64*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x7e8);
/*802C5F68 002C2D68*/ PPC::Runtime::ASM::li(context->r4, lbl_805D8CA4 @ Get_MemoryOffset_SDA21);
/*802C5F6C 002C2D6C*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802C5F70 002C2D70*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C5F74 002C2D74*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C5F78 002C2D78*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802C5F7C 002C2D7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C5F80 002C2D80*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E356C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C5F84 002C2D84*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2b0);
/*802C5F88 002C2D88*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x7ec);
/*802C5F8C 002C2D8C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D8CD4 @ Get_MemoryOffset_SDA21);
/*802C5F90 002C2D90*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802C5F94 002C2D94*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C5F98 002C2D98*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C5F9C 002C2D9C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802C5FA0 002C2DA0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C5FA4 002C2DA4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E356C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C5FA8 002C2DA8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3b4);
/*802C5FAC 002C2DAC*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x7f0);
/*802C5FB0 002C2DB0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D8CDC @ Get_MemoryOffset_SDA21);
/*802C5FB4 002C2DB4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802C5FB8 002C2DB8*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C5FBC 002C2DBC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1b4);
/*802C5FC0 002C2DC0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C5FC4 002C2DC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/*802C5FC8 002C2DC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C5FCC 002C2DCC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C5FD0 002C2DD0*/ PPC::Runtime::ASM::bctrl();
/*802C5FD4 002C2DD4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2b8);
/*802C5FD8 002C2DD8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C5FDC 002C2DDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r31));
/*802C5FE0 002C2DE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C5FE4 002C2DE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C5FE8 002C2DE8*/ PPC::Runtime::ASM::bctrl();
/*802C5FEC 002C2DEC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3bc);
/*802C5FF0 002C2DF0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C5FF4 002C2DF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3bc, context->r31));
/*802C5FF8 002C2DF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C5FFC 002C2DFC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C6000 002C2E00*/ PPC::Runtime::ASM::bctrl();
/*802C6004 002C2E04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C6008 002C2E08*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802C600C 002C2E0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802C6010 002C2E10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802C6014 002C2E14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802C6018 002C2E18*/ PPC::Runtime::ASM::blr();
}