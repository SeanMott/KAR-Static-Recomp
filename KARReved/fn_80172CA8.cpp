//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80172CA8(PPC::Runtime::GCContext* context)
{
/*80172CA8 0016FAA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80172CAC 0016FAAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80172CB0 0016FAB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172CB4 0016FAB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80172CB8 0016FAB8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80172CBC 0016FABC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80172CC0 0016FAC0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80172CC4 0016FAC4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80172CC8 0016FAC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcac, context->r3));
/*80172CCC 0016FACC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80172CD0 0016FAD0*/ PPC::Runtime::ASM::beq(.L_80172CFC);
/*80172CD4 0016FAD4*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80172CD8 0016FAD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80172CDC 0016FADC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*80172CE0 0016FAE0*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80172CE4 0016FAE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80172CE8 0016FAE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*80172CEC 0016FAEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80172CF0 0016FAF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80172CF4 0016FAF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*80172CF8 0016FAF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80172CFC, 0x80172CFC) //this is a jump label
/*80172CFC 0016FAFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172D00 0016FB00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80172D04 0016FB04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80172D08 0016FB08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80172D0C 0016FB0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80172D10 0016FB10*/ PPC::Runtime::ASM::blr();
}