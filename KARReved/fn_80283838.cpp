//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_getTrialFlag.hpp"



void fn_80283838(PPC::Runtime::GCContext* context)
{
/*80283838 00280638*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028383C 0028063C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80283840 00280640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283844 00280644*/ PPC::Runtime::ASM::bl(fn_getTrialFlag);
/*80283848 00280648*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8028384C 0028064C*/ PPC::Runtime::ASM::beq(.L_80283864);
/*80283850 00280650*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F760 @ Get_MemoryOffset_HighBit);
/*80283854 00280654*/ PPC::Runtime::ASM::li(context->r4, 0x54);
/*80283858 00280658*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055F760 @ Get_MemoryOffset_LowBit);
/*8028385C 0028065C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80283860 00280660*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
RUNTIME_PPC_JUMP_LABEL(.L_80283864, 0x80283864) //this is a jump label
/*80283864 00280664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80283868 00280668*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028386C 0028066C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80283870 00280670*/ PPC::Runtime::ASM::blr();
}