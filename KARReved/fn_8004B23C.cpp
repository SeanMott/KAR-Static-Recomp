//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetClearcheckerType0Ptr.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"



void fn_8004B23C(PPC::Runtime::GCContext* context)
{
/*8004B23C 0004803C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004B240 00048040*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004B244 00048044*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B248 00048048*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004B24C 0004804C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004B250 00048050*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerType0Ptr);
/*8004B254 00048054*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*8004B258 00048058*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B25C, 0x8004B25C) //this is a jump label
/*8004B25C 0004805C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8004B260 00048060*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004B264 00048064*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B268 00048068*/ PPC::Runtime::ASM::bne(.L_8004B280);
/*8004B26C 0004806C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8004B270 00048070*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004B274 00048074*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004B278 00048078*/ PPC::Runtime::ASM::beq(.L_8004B280);
/*8004B27C 0004807C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004B280, 0x8004B280) //this is a jump label
/*8004B280 00048080*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8004B284 00048084*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*8004B288 00048088*/ PPC::Runtime::ASM::blt(.L_8004B25C);
/*8004B28C 0004808C*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8004B290 00048090*/ PPC::Runtime::ASM::srawi(context->r4, context->r31, 31);
/*8004B294 00048094*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8004B298 00048098*/ PPC::Runtime::ASM::subfc(context->r0, context->r0, context->r31);
/*8004B29C 0004809C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B2A0 000480A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004B2A4 000480A4*/ PPC::Runtime::ASM::adde(context->r3, context->r4, context->r3);
/*8004B2A8 000480A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8004B2AC 000480AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004B2B0 000480B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004B2B4 000480B4*/ PPC::Runtime::ASM::blr();
}