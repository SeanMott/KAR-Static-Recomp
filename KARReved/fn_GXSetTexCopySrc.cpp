//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetTexCopySrc(PPC::Runtime::GCContext* context)
{
/*803CC654 003C9454*/ PPC::Runtime::ASM::lwz(context->r9, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC658 003C9458*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*803CC65C 003C945C*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r5, 16);
/*803CC660 003C9460*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC664 003C9464*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r6, 16);
/*803CC668 003C9468*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*803CC66C 003C946C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC670 003C9470*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 16);
/*803CC674 003C9474*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r4, 16, 10);
/*803CC678 003C9478*/ PPC::Runtime::ASM::clrrwi(context->r5, context->r8, 10);
/*803CC67C 003C947C*/ PPC::Runtime::ASM::or(context->r3, context->r5, context->r3);
/*803CC680 003C9480*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC684 003C9484*/ PPC::Runtime::ASM::subi(context->r3, context->r7, 0x1);
/*803CC688 003C9488*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 10);
/*803CC68C 003C948C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC690 003C9490*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 22, 11);
/*803CC694 003C9494*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CC698 003C9498*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC69C 003C949C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC6A0 003C94A0*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r4, 8);
/*803CC6A4 003C94A4*/ PPC::Runtime::ASM::oris(context->r4, context->r4, 0x4900);
/*803CC6A8 003C94A8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r9));
/*803CC6AC 003C94AC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6B0 003C94B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6B4 003C94B4*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 10);
/*803CC6B8 003C94B8*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*803CC6BC 003C94BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6C0 003C94C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6C4 003C94C4*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 22, 11);
/*803CC6C8 003C94C8*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803CC6CC 003C94CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6D0 003C94D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6D4 003C94D4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 8);
/*803CC6D8 003C94D8*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x4a00);
/*803CC6DC 003C94DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r9));
/*803CC6E0 003C94E0*/ PPC::Runtime::ASM::blr();
}