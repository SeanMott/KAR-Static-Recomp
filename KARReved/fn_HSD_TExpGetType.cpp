//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_TExpGetType(PPC::Runtime::GCContext* context)
{
/*804217C0 0041E5C0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804217C4 0041E5C4*/ PPC::Runtime::ASM::bne(.L_804217D0);
/*804217C8 0041E5C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804217CC 0041E5CC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_804217D0, 0x804217D0) //this is a jump label
/*804217D0 0041E5D0*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*804217D4 0041E5D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*804217D8 0041E5D8*/ PPC::Runtime::ASM::bne(.L_804217E4);
/*804217DC 0041E5DC*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*804217E0 0041E5E0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_804217E4, 0x804217E4) //this is a jump label
/*804217E4 0041E5E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*804217E8 0041E5E8*/ PPC::Runtime::ASM::bne(.L_804217F4);
/*804217EC 0041E5EC*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*804217F0 0041E5F0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_804217F4, 0x804217F4) //this is a jump label
/*804217F4 0041E5F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804217F8 0041E5F8*/ PPC::Runtime::ASM::blr();
}