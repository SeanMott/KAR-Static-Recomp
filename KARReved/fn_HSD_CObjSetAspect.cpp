//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_CObjSetAspect(PPC::Runtime::GCContext* context)
{
/*80402C94 003FFA94*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80402C98 003FFA98*/ PPC::Runtime::ASM::beqlr();
/*80402C9C 003FFA9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*80402CA0 003FFAA0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80402CA4 003FFAA4*/ PPC::Runtime::ASM::beq(.L_80402CAC);
/*80402CA8 003FFAA8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80402CAC, 0x80402CAC) //this is a jump label
/*80402CAC 003FFAAC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*80402CB0 003FFAB0*/ PPC::Runtime::ASM::blr();
}