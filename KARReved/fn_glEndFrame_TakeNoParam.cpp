//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_glEndFrame_TakeNoParam(PPC::Runtime::GCContext* context)
{
/*8029D704 0029A504*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029D708 0029A508*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029D70C 0029A50C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029D710 0029A510*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
/*8029D714 0029A514*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8029D718 0029A518*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029D71C 0029A51C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029D720 0029A520*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029D724 0029A524*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029D728 0029A528*/ PPC::Runtime::ASM::blr();
}