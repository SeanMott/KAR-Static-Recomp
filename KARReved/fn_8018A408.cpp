//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8018A408(PPC::Runtime::GCContext* context)
{
/*8018A408 00187208*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8018A40C 0018720C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x68);
/*8018A410 00187210*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8018A414 00187214*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8018A418, 0x8018A418) //this is a jump label
/*8018A418 00187218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8018A41C 0018721C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8018A420 00187220*/ PPC::Runtime::ASM::beq(.L_8018A480);
/*8018A424 00187224*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8018A428 00187228*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8018A42C 0018722C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8018A430 00187230*/ PPC::Runtime::ASM::beq(.L_8018A480);
/*8018A434 00187234*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8018A438 00187238*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8018A43C 0018723C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8018A440 00187240*/ PPC::Runtime::ASM::beq(.L_8018A480);
/*8018A444 00187244*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8018A448 00187248*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8018A44C 0018724C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8018A450 00187250*/ PPC::Runtime::ASM::beq(.L_8018A480);
/*8018A454 00187254*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8018A458 00187258*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8018A45C 0018725C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8018A460 00187260*/ PPC::Runtime::ASM::beq(.L_8018A480);
/*8018A464 00187264*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8018A468 00187268*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8018A46C 0018726C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8018A470 00187270*/ PPC::Runtime::ASM::beq(.L_8018A480);
/*8018A474 00187274*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x30);
/*8018A478 00187278*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8018A47C 0018727C*/ PPC::Runtime::ASM::bdnz(.L_8018A418);
RUNTIME_PPC_JUMP_LABEL(.L_8018A480, 0x8018A480) //this is a jump label
/*8018A480 00187280*/ PPC::Runtime::ASM::cmplwi(context->r5, 0xc);
/*8018A484 00187284*/ PPC::Runtime::ASM::bne(.L_8018A490);
/*8018A488 00187288*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8018A48C 0018728C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8018A490, 0x8018A490) //this is a jump label
/*8018A490 00187290*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8018A494 00187294*/ PPC::Runtime::ASM::blr();
}