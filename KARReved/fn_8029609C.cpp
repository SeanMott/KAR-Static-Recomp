//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029609C(PPC::Runtime::GCContext* context)
{
/*8029609C 00292E9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802960A0 00292EA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802960A4 00292EA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802960A8 00292EA8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802960AC 00292EAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802960B0 00292EB0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7AF4 @ Get_MemoryOffset_SDA21);
/*802960B4 00292EB4*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7AEC @ Get_MemoryOffset_SDA21);
/*802960B8 00292EB8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802960BC 00292EBC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802960C0 00292EC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802960C4 00292EC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802960C8 00292EC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802960CC 00292ECC*/ PPC::Runtime::ASM::blr();
}