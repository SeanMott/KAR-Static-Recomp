//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80481510.hpp"
#include "fn_8047F648.hpp"



void fn_804814C4(PPC::Runtime::GCContext* context)
{
/*804814C4 0047E2C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804814C8 0047E2C8*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x8);
/*804814CC 0047E2CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804814D0 0047E2D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*804814D4 0047E2D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*804814D8 0047E2D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*804814DC 0047E2DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*804814E0 0047E2E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*804814E4 0047E2E4*/ PPC::Runtime::ASM::bge(.L_804814F4);
/*804814E8 0047E2E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*804814EC 0047E2EC*/ PPC::Runtime::ASM::bl(fn_80481510);
/*804814F0 0047E2F0*/ PPC::Runtime::ASM::b(.L_80481500);
RUNTIME_PPC_JUMP_LABEL(.L_804814F4, 0x804814F4) //this is a jump label
/*804814F4 0047E2F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*804814F8 0047E2F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*804814FC 0047E2FC*/ PPC::Runtime::ASM::bl(fn_8047F648);
RUNTIME_PPC_JUMP_LABEL(.L_80481500, 0x80481500) //this is a jump label
/*80481500 0047E300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80481504 0047E304*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*80481508 0047E308*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8048150C 0047E30C*/ PPC::Runtime::ASM::blr();
}