//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8045BDEC(PPC::Runtime::GCContext* context)
{
/*8045BDEC 00458BEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8045BDF0 00458BF0*/ PPC::Runtime::ASM::beq(.L_8045BE18);
/*8045BDF4 00458BF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045BDF8 00458BF8*/ PPC::Runtime::ASM::b(.L_8045BE00);
RUNTIME_PPC_JUMP_LABEL(.L_8045BDFC, 0x8045BDFC) //this is a jump label
/*8045BDFC 00458BFC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8045BE00, 0x8045BE00) //this is a jump label
/*8045BE00 00458C00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045BE04 00458C04*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8045BE08 00458C08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8045BE0C 00458C0C*/ PPC::Runtime::ASM::bne(.L_8045BDFC);
/*8045BE10 00458C10*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8045BE14 00458C14*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8045BE18, 0x8045BE18) //this is a jump label
/*8045BE18 00458C18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8045BE1C 00458C1C*/ PPC::Runtime::ASM::blr();
}