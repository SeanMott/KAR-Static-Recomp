//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190708.hpp"
#include "fn_8019C43C.hpp"
#include "fn_Rider_ActionStateChange.hpp"



void fn_801BDA34(PPC::Runtime::GCContext* context)
{
/*801BDA34 001BA834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BDA38 001BA838*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BDA3C 001BA83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDA40 001BA840*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BDA44 001BA844*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801BDA48 001BA848*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801BDA4C 001BA84C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801BDA50 001BA850*/ PPC::Runtime::ASM::bl(fn_80190708);
/*801BDA54 001BA854*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801BDA58 001BA858*/ PPC::Runtime::ASM::bl(fn_8019C43C);
/*801BDA5C 001BA85C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801BDA60 001BA860*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*801BDA64 001BA864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x940, context->r30));
/*801BDA68 001BA868*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BDA6C 001BA86C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r30));
/*801BDA70 001BA870*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801BDA74 001BA874*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801BDA78 001BA878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r30));
/*801BDA7C 001BA87C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801BDA80 001BA880*/ PPC::Runtime::ASM::bl(fn_804293F4);
/*801BDA84 001BA884*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801BDA88 001BA888*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*801BDA8C 001BA88C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801BDA90 001BA890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801BDA94 001BA894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x940, context->r30));
/*801BDA98 001BA898*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801BDA9C 001BA89C*/ PPC::Runtime::ASM::bl(fn_80429B24);
/*801BDAA0 001BA8A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BDAA4 001BA8A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801BDAA8 001BA8A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r30));
/*801BDAAC 001BA8AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801BDAB0 001BA8B0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801BDAB4 001BA8B4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E181C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BDAB8 001BA8B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r30));
/*801BDABC 001BA8BC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x220);
/*801BDAC0 001BA8C0*/ PPC::Runtime::ASM::li(context->r4, 0x82);
/*801BDAC4 001BA8C4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BDAC8 001BA8C8*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801BDACC 001BA8CC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*801BDAD0 001BA8D0*/ PPC::Runtime::ASM::bne(.L_801BDAE8);
/*801BDAD4 001BA8D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801BDAD8 001BA8D8*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*801BDADC 001BA8DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x944, context->r30));
/*801BDAE0 001BA8E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x948, context->r30));
/*801BDAE4 001BA8E4*/ PPC::Runtime::ASM::b(.L_801BDAF8);
RUNTIME_PPC_JUMP_LABEL(.L_801BDAE8, 0x801BDAE8) //this is a jump label
/*801BDAE8 001BA8E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801BDAEC 001BA8EC*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*801BDAF0 001BA8F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x944, context->r30));
/*801BDAF4 001BA8F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x948, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801BDAF8, 0x801BDAF8) //this is a jump label
/*801BDAF8 001BA8F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r30));
/*801BDAFC 001BA8FC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BDB00 001BA900*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801BDB04 001BA904*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r30));
/*801BDB08 001BA908*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r30));
/*801BDB0C 001BA90C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801BDB10 001BA910*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r30));
/*801BDB14 001BA914*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BDB18 001BA918*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801BDB1C 001BA91C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDB20 001BA920*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BDB24 001BA924*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BDB28 001BA928*/ PPC::Runtime::ASM::blr();
}