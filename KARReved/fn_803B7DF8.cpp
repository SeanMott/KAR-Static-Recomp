//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803B7DF8(PPC::Runtime::GCContext* context)
{
/*803B7DF8 003B4BF8*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*803B7DFC 003B4BFC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*803B7E00 003B4C00*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B7E04 003B4C04*/ PPC::Runtime::ASM::b(.L_803B7E14);
RUNTIME_PPC_JUMP_LABEL(.L_803B7E08, 0x803B7E08) //this is a jump label
/*803B7E08 003B4C08*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803B7E0C 003B4C0C*/ PPC::Runtime::ASM::bne(.L_803B7E14);
/*803B7E10 003B4C10*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_803B7E14, 0x803B7E14) //this is a jump label
/*803B7E14 003B4C14*/ PPC::Runtime::ASM::lbzu(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*803B7E18 003B4C18*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803B7E1C 003B4C1C*/ PPC::Runtime::ASM::bne(.L_803B7E08);
/*803B7E20 003B4C20*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803B7E24 003B4C24*/ PPC::Runtime::ASM::bnelr();
/*803B7E28 003B4C28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803B7E2C 003B4C2C*/ PPC::Runtime::ASM::beq(.L_803B7E38);
/*803B7E30 003B4C30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B7E34 003B4C34*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803B7E38, 0x803B7E38) //this is a jump label
/*803B7E38 003B4C38*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*803B7E3C 003B4C3C*/ PPC::Runtime::ASM::blr();
}