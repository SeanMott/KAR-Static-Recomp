//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80232968.hpp"



void fn_8023265C(PPC::Runtime::GCContext* context)
{
/*8023265C 0022F45C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80232660 0022F460*/ PPC::Runtime::ASM::mflr(context->r0);
/*80232664 0022F464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232668 0022F468*/ PPC::Runtime::ASM::bl(fn_80232968);
/*8023266C 0022F46C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80232670 0022F470*/ PPC::Runtime::ASM::bne(.L_80232688);
/*80232674 0022F474*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D770 @ Get_MemoryOffset_HighBit);
/*80232678 0022F478*/ PPC::Runtime::ASM::li(context->r4, 0x78);
/*8023267C 0022F47C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D770 @ Get_MemoryOffset_LowBit);
/*80232680 0022F480*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80232684 0022F484*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
RUNTIME_PPC_JUMP_LABEL(.L_80232688, 0x80232688) //this is a jump label
/*80232688 0022F488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023268C 0022F48C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80232690 0022F490*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80232694 0022F494*/ PPC::Runtime::ASM::blr();
}