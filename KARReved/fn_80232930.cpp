//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80232930(PPC::Runtime::GCContext* context)
{
/*80232930 0022F730*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80232934 0022F734*/ PPC::Runtime::ASM::mflr(context->r0);
/*80232938 0022F738*/ PPC::Runtime::ASM::lis(context->r5, lbl_8055D770 @ Get_MemoryOffset_HighBit);
/*8023293C 0022F73C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80232940 0022F740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232944 0022F744*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_8055D770 @ Get_MemoryOffset_LowBit);
/*80232948 0022F748*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*8023294C 0022F74C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232950 0022F750*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80232954 0022F754*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80232958 0022F758*/ PPC::Runtime::ASM::blr();
}