//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80292D24(PPC::Runtime::GCContext* context)
{
/*80292D24 0028FB24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80292D28 0028FB28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80292D2C 0028FB2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80292D30 0028FB30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80292D34 0028FB34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292D38 0028FB38*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7650 @ Get_MemoryOffset_SDA21);
/*80292D3C 0028FB3C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7648 @ Get_MemoryOffset_SDA21);
/*80292D40 0028FB40*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80292D44 0028FB44*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80292D48 0028FB48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292D4C 0028FB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292D50 0028FB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292D54 0028FB54*/ PPC::Runtime::ASM::blr();
}