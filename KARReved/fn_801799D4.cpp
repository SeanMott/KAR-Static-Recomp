//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_801799D4(PPC::Runtime::GCContext* context)
{
/*801799D4 001767D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801799D8 001767D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801799DC 001767DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801799E0 001767E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801799E4 001767E4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*801799E8 001767E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801799EC 001767EC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801799F0 001767F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801799F4 001767F4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801799F8 001767F8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801799FC 001767FC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80179A00 00176800*/ PPC::Runtime::ASM::extsb(context->r4, context->r30);
/*80179A04 00176804*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0x64);
/*80179A08 00176808*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80179A0C 0017680C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80179A10 00176810*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x14);
/*80179A14 00176814*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r5);
/*80179A18 00176818*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80179A1C 0017681C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80179A20 00176820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc8, context->r3));
/*80179A24 00176824*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80179A28 00176828*/ PPC::Runtime::ASM::beq(.L_80179A4C);
/*80179A2C 0017682C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80179A30 00176830*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80179A34 00176834*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80179A38 00176838*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80179A3C 0017683C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80179A40 00176840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80179A44 00176844*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80179A48 00176848*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80179A4C, 0x80179A4C) //this is a jump label
/*80179A4C 0017684C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80179A50 00176850*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80179A54 00176854*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80179A58 00176858*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80179A5C 0017685C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80179A60 00176860*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80179A64 00176864*/ PPC::Runtime::ASM::blr();
}