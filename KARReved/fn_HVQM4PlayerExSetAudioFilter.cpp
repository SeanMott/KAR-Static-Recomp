//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HVQM4PlayerExSetAudioFilter(PPC::Runtime::GCContext* context)
{
/*80077FC0 00074DC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80077FC4 00074DC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80077FC8 00074DC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80077FCC 00074DCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80077FD0 00074DD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80077FD4 00074DD4*/ PPC::Runtime::ASM::beq(.L_80077FE0);
/*80077FD8 00074DD8*/ PPC::Runtime::ASM::bl(fn_8045F70C);
/*80077FDC 00074DDC*/ PPC::Runtime::ASM::b(.L_80077FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80077FE0, 0x80077FE0) //this is a jump label
/*80077FE0 00074DE0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80077FE4, 0x80077FE4) //this is a jump label
/*80077FE4 00074DE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80077FE8 00074DE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80077FEC 00074DEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80077FF0 00074DF0*/ PPC::Runtime::ASM::blr();
}