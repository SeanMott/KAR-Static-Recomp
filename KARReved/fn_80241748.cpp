//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80241748(PPC::Runtime::GCContext* context)
{
/*80241748 0023E548*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024174C 0023E54C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80241750 0023E550*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DCD0 @ Get_MemoryOffset_HighBit);
/*80241754 0023E554*/ PPC::Runtime::ASM::li(context->r4, 0x2c);
/*80241758 0023E558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024175C 0023E55C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DCD0 @ Get_MemoryOffset_LowBit);
/*80241760 0023E560*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80241764 0023E564*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80241768 0023E568*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DCA4 @ Get_MemoryOffset_HighBit);
/*8024176C 0023E56C*/ PPC::Runtime::ASM::li(context->r4, 0x370);
/*80241770 0023E570*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055DCA4 @ Get_MemoryOffset_LowBit);
/*80241774 0023E574*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80241778 0023E578*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8024177C 0023E57C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80241780 0023E580*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80241784 0023E584*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80241788 0023E588*/ PPC::Runtime::ASM::blr();
}