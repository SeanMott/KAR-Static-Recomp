//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B7E0(PPC::Runtime::GCContext* context)
{
/*8029B7E0 002985E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029B7E4 002985E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029B7E8 002985E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029B7EC 002985EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029B7F0 002985F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029B7F4 002985F4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7CAC @ Get_MemoryOffset_SDA21);
/*8029B7F8 002985F8*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7CA4 @ Get_MemoryOffset_SDA21);
/*8029B7FC 002985FC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029B800 00298600*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8029B804 00298604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029B808 00298608*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029B80C 0029860C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029B810 00298610*/ PPC::Runtime::ASM::blr();
}