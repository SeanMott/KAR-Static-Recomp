//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EC9BC(PPC::Runtime::GCContext* context)
{
/*803EC9BC 003E97BC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE0C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC9C0 003E97C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80571800 @ Get_MemoryOffset_HighBit);
/*803EC9C4 003E97C4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80571800 @ Get_MemoryOffset_LowBit);
/*803EC9C8 003E97C8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*803EC9CC 003E97CC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE0C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC9D0 003E97D0*/ PPC::Runtime::ASM::mulli(context->r3, context->r5, 0x300);
/*803EC9D4 003E97D4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE0C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC9D8 003E97D8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*803EC9DC 003E97DC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 31);
/*803EC9E0 003E97E0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE0C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC9E4 003E97E4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE0C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC9E8 003E97E8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x300);
/*803EC9EC 003E97EC*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*803EC9F0 003E97F0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE0C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC9F4 003E97F4*/ PPC::Runtime::ASM::blr();
}