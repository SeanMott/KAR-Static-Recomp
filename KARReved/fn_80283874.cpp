//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80283874(PPC::Runtime::GCContext* context)
{
/*80283874 00280674*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80283878 00280678*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028387C 0028067C*/ PPC::Runtime::ASM::lis(context->r5, lbl_8055F760 @ Get_MemoryOffset_HighBit);
/*80283880 00280680*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80283884 00280684*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283888 00280688*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_8055F760 @ Get_MemoryOffset_LowBit);
/*8028388C 0028068C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*80283890 00280690*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283894 00280694*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80283898 00280698*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028389C 0028069C*/ PPC::Runtime::ASM::blr();
}