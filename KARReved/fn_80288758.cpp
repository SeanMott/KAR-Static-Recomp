//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80288758(PPC::Runtime::GCContext* context)
{
/*80288758 00285558*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028875C 0028555C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80288760 00285560*/ PPC::Runtime::ASM::beq(.L_8028877C);
/*80288764 00285564*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDAA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80288768 00285568*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8028876C 0028556C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDAA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80288770 00285570*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80288774 00285574*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDAA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80288778 00285578*/ PPC::Runtime::ASM::b(.L_80288784);
RUNTIME_PPC_JUMP_LABEL(.L_8028877C, 0x8028877C) //this is a jump label
/*8028877C 0028557C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDAA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80288780 00285580*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80288784, 0x80288784) //this is a jump label
/*80288784 00285584*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80288788 00285588*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8028878C 0028558C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80288790 00285590*/ PPC::Runtime::ASM::blr();
}