//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CD60.hpp"



void fn_8038D0A8(PPC::Runtime::GCContext* context)
{
/*8038D0A8 00389EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8038D0AC 00389EAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038D0B0 00389EB0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8038D0B4 00389EB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038D0B8 00389EB8*/ PPC::Runtime::ASM::beq(.L_8038D0D4);
/*8038D0BC 00389EBC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8038D0C0 00389EC0*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*8038D0C4 00389EC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038D0C8 00389EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8038D0CC 00389ECC*/ PPC::Runtime::ASM::bl(fn_8038CD60);
/*8038D0D0 00389ED0*/ PPC::Runtime::ASM::b(.L_8038D0D8);
RUNTIME_PPC_JUMP_LABEL(.L_8038D0D4, 0x8038D0D4) //this is a jump label
/*8038D0D4 00389ED4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8038D0D8, 0x8038D0D8) //this is a jump label
/*8038D0D8 00389ED8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038D0DC 00389EDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038D0E0 00389EE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8038D0E4 00389EE4*/ PPC::Runtime::ASM::blr();
}