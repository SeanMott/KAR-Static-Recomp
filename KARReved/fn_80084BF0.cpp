//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_debugInitMenu.hpp"
#include "fn_800AB584.hpp"
#include "fn_800AB55C.hpp"
#include "fn_800AB534.hpp"



void fn_80084BF0(PPC::Runtime::GCContext* context)
{
/*80084BF0 000819F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80084BF4 000819F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80084BF8 000819F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552FB0 @ Get_MemoryOffset_HighBit);
/*80084BFC 000819FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80084C00 00081A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80084C04 00081A04*/ PPC::Runtime::ASM::li(context->r5, 0x94);
/*80084C08 00081A08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80084C0C 00081A0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80084C10 00081A10*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_80552FB0 @ Get_MemoryOffset_LowBit);
/*80084C14 00081A14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*80084C18 00081A18*/ PPC::Runtime::ASM::bl(memset);
/*80084C1C 00081A1C*/ PPC::Runtime::ASM::addi(context->r31, context->r30, 0x0);
/*80084C20 00081A20*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80084C24 00081A24*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80084C28 00081A28*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80084C2C 00081A2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80084C30 00081A30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80084C34 00081A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80084C38 00081A38*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80084C3C 00081A3C*/ PPC::Runtime::ASM::li(context->r6, 0x17);
/*80084C40 00081A40*/ PPC::Runtime::ASM::li(context->r7, 0x4);
/*80084C44 00081A44*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084C48 00081A48*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80084C4C 00081A4C*/ PPC::Runtime::ASM::bl(fn_debugInitMenu);
/*80084C50 00081A50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80084C54 00081A54*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084C58 00081A58*/ PPC::Runtime::ASM::beq(.L_80084CC0);
/*80084C5C 00081A5C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*80084C60 00081A60*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80084C64 00081A64*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 28, 26);
/*80084C68 00081A68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*80084C6C 00081A6C*/ PPC::Runtime::ASM::lwz(context->r0, lbl_805D5648 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80084C70 00081A70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084C74 00081A74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80084C78 00081A78*/ PPC::Runtime::ASM::bl(fn_800AB584);
/*80084C7C 00081A7C*/ PPC::Runtime::ASM::lwz(context->r0, lbl_805D564C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80084C80 00081A80*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*80084C84 00081A84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084C88 00081A88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80084C8C 00081A8C*/ PPC::Runtime::ASM::bl(fn_800AB55C);
/*80084C90 00081A90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084C94 00081A94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DEED8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80084C98 00081A98*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEEDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80084C9C 00081A9C*/ PPC::Runtime::ASM::bl(fn_800AB534);
/*80084CA0 00081AA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084CA4 00081AA4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*80084CA8 00081AA8*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x40);
/*80084CAC 00081AAC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*80084CB0 00081AB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80084CB4 00081AB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*80084CB8 00081AB8*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x80);
/*80084CBC 00081ABC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80084CC0, 0x80084CC0) //this is a jump label
/*80084CC0 00081AC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*80084CC4 00081AC4*/ PPC::Runtime::ASM::li(context->r4, 0x8c);
/*80084CC8 00081AC8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80084CCC 00081ACC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80084CD0 00081AD0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc0);
/*80084CD4 00081AD4*/ PPC::Runtime::ASM::li(context->r4, 0x3000);
/*80084CD8 00081AD8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80084CDC 00081ADC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80084CE0 00081AE0*/ PPC::Runtime::ASM::lis(context->r4, 0x4);
/*80084CE4 00081AE4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xec);
/*80084CE8 00081AE8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1eb0);
/*80084CEC 00081AEC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80084CF0 00081AF0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80084CF4 00081AF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80084CF8 00081AF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80084CFC 00081AFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80084D00 00081B00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80084D04 00081B04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80084D08 00081B08*/ PPC::Runtime::ASM::blr();
}