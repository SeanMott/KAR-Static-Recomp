//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80287EA8(PPC::Runtime::GCContext* context)
{
/*80287EA8 00284CA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80287EAC 00284CAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80287EB0 00284CB0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80287EB4 00284CB4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D74E8 @ Get_MemoryOffset_SDA21);
/*80287EB8 00284CB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287EBC 00284CBC*/ PPC::Runtime::ASM::li(context->r6, lbl_805D74D0 @ Get_MemoryOffset_SDA21);
/*80287EC0 00284CC0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80287EC4 00284CC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80287EC8 00284CC8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80287ECC 00284CCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80287ED0 00284CD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80287ED4 00284CD4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80287ED8 00284CD8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*80287EDC 00284CDC*/ PPC::Runtime::ASM::bl(fn_8039FBC4);
/*80287EE0 00284CE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80287EE4 00284CE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287EE8 00284CE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80287EEC 00284CEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80287EF0 00284CF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80287EF4 00284CF4*/ PPC::Runtime::ASM::blr();
}