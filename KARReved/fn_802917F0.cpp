//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802917F0(PPC::Runtime::GCContext* context)
{
/*802917F0 0028E5F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802917F4 0028E5F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802917F8 0028E5F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802917FC 0028E5FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80291800 0028E600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291804 0028E604*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7778 @ Get_MemoryOffset_SDA21);
/*80291808 0028E608*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7770 @ Get_MemoryOffset_SDA21);
/*8029180C 0028E60C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80291810 0028E610*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80291814 0028E614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291818 0028E618*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029181C 0028E61C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80291820 0028E620*/ PPC::Runtime::ASM::blr();
}