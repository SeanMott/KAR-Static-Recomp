//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80480D88.hpp"
#include "fn_PPPInitIPCP.hpp"



void fn_8047FB9C(PPC::Runtime::GCContext* context)
{
/*8047FB9C 0047C99C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047FBA0 0047C9A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047FBA4 0047C9A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8047FBA8 0047C9A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047FBAC 0047C9AC*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x0);
/*8047FBB0 0047C9B0*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x0);
/*8047FBB4 0047C9B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8047FBB8 0047C9B8*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047FBBC 0047C9BC*/ PPC::Runtime::ASM::addi(context->r6, context->r7, 0x0);
/*8047FBC0 0047C9C0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047FBC4 0047C9C4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*8047FBC8 0047C9C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047FBCC 0047C9CC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*8047FBD0 0047C9D0*/ PPC::Runtime::ASM::bl(fn_80480D88);
/*8047FBD4 0047C9D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047FBD8 0047C9D8*/ PPC::Runtime::ASM::bne(.L_8047FBE4);
/*8047FBDC 0047C9DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047FBE0 0047C9E0*/ PPC::Runtime::ASM::b(.L_8047FC08);
RUNTIME_PPC_JUMP_LABEL(.L_8047FBE4, 0x8047FBE4) //this is a jump label
/*8047FBE4 0047C9E4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047FBE8 0047C9E8*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*8047FBEC 0047C9EC*/ PPC::Runtime::ASM::bl(fn_PPPInitIPCP);
/*8047FBF0 0047C9F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x284, context->r30));
/*8047FBF4 0047C9F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047FBF8 0047C9F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8047FBFC 0047C9FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x284, context->r31));
/*8047FC00 0047CA00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r29));
/*8047FC04 0047CA04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8047FC08, 0x8047FC08) //this is a jump label
/*8047FC08 0047CA08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8047FC0C 0047CA0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047FC10 0047CA10*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8047FC14 0047CA14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047FC18 0047CA18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8047FC1C 0047CA1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047FC20 0047CA20*/ PPC::Runtime::ASM::blr();
}