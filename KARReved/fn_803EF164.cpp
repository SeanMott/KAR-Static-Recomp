//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EF164(PPC::Runtime::GCContext* context)
{
/*803EF164 003EBF64*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE144 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF168 003EBF68*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803EF16C 003EBF6C*/ PPC::Runtime::ASM::beq(.L_803EF1A4);
/*803EF170 003EBF70*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE140 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF174 003EBF74*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE13C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF178 003EBF78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803EF17C 003EBF7C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE138 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF180 003EBF80*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE140 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF184 003EBF84*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x38);
/*803EF188 003EBF88*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE140 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF18C 003EBF8C*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r0);
/*803EF190 003EBF90*/ PPC::Runtime::ASM::divwu(context->r0, context->r5, context->r4);
/*803EF194 003EBF94*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r4);
/*803EF198 003EBF98*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*803EF19C 003EBF9C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE140 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EF1A0 003EBFA0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803EF1A4, 0x803EF1A4) //this is a jump label
/*803EF1A4 003EBFA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803EF1A8 003EBFA8*/ PPC::Runtime::ASM::blr();
}