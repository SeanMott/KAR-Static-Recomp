//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8047477C.hpp"



void fn_TCPOutputCallback(PPC::Runtime::GCContext* context)
{
/*80474744 00471544*/ PPC::Runtime::ASM::mflr(context->r0);
/*80474748 00471548*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8047474C 0047154C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80474750 00471550*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80474754 00471554*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*80474758 00471558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r3));
/*8047475C 0047155C*/ PPC::Runtime::ASM::bge(.L_80474764);
/*80474760 00471560*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80474764, 0x80474764) //this is a jump label
/*80474764 00471564*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80474768 00471568*/ PPC::Runtime::ASM::bl(fn_8047477C);
/*8047476C 0047156C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80474770 00471570*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*80474774 00471574*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80474778 00471578*/ PPC::Runtime::ASM::blr();
}