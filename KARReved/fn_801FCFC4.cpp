//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80055D10.hpp"
#include "fn_80203DBC.hpp"
#include "fn_802000D4.hpp"



void fn_801FCFC4(PPC::Runtime::GCContext* context)
{
/*801FCFC4 001F9DC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801FCFC8 001F9DC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FCFCC 001F9DCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801FCFD0 001F9DD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801FCFD4 001F9DD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801FCFD8 001F9DD8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801FCFDC 001F9DDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801FCFE0 001F9DE0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801FCFE4 001F9DE4*/ PPC::Runtime::ASM::beq(.L_801FD048);
/*801FCFE8 001F9DE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801FCFEC 001F9DEC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801FCFF0 001F9DF0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801FCFF4 001F9DF4*/ PPC::Runtime::ASM::bl(fn_80055D10);
/*801FCFF8 001F9DF8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801FCFFC 001F9DFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FD000 001F9E00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801FD004 001F9E04*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r31));
/*801FD008 001F9E08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*801FD00C 001F9E0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r31));
/*801FD010 001F9E10*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FD014 001F9E14*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FD018 001F9E18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801FD01C 001F9E1C*/ PPC::Runtime::ASM::bl(fn_80203DBC);
/*801FD020 001F9E20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FD024 001F9E24*/ PPC::Runtime::ASM::bl(fn_802000D4);
/*801FD028 001F9E28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FD02C 001F9E2C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801FD030 001F9E30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FD034 001F9E34*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r31));
/*801FD038 001F9E38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801FD03C 001F9E3C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*801FD040 001F9E40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r31));
/*801FD044 001F9E44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801FD048, 0x801FD048) //this is a jump label
/*801FD048 001F9E48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801FD04C 001F9E4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801FD050 001F9E50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801FD054 001F9E54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FD058 001F9E58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801FD05C 001F9E5C*/ PPC::Runtime::ASM::blr();
}