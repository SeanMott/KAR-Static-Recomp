//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803959FC(PPC::Runtime::GCContext* context)
{
/*803959FC 003927FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80395A00 00392800*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80395A04 00392804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80395A08 00392808*/ PPC::Runtime::ASM::cmplw(context->r5, context->r0);
/*80395A0C 0039280C*/ PPC::Runtime::ASM::bne(.L_80395A24);
/*80395A10 00392810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80395A14 00392814*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80395A18 00392818*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80395A1C 0039281C*/ PPC::Runtime::ASM::bne(.L_80395A24);
/*80395A20 00392820*/ PPC::Runtime::ASM::li(context->r6, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80395A24, 0x80395A24) //this is a jump label
/*80395A24 00392824*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r6, 24);
/*80395A28 00392828*/ PPC::Runtime::ASM::blr();
}