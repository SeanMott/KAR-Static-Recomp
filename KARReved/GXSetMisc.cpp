//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void GXSetMisc(PPC::Runtime::GCContext* context)
{
/*803CBA48 003C8848*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*803CBA4C 003C884C*/ PPC::Runtime::ASM::beq(.L_803CBAAC);
/*803CBA50 003C8850*/ PPC::Runtime::ASM::bge(.L_803CBA64);
/*803CBA54 003C8854*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803CBA58 003C8858*/ PPC::Runtime::ASM::beqlr();
/*803CBA5C 003C885C*/ PPC::Runtime::ASM::bge(.L_803CBA70);
/*803CBA60 003C8860*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803CBA64, 0x803CBA64) //this is a jump label
/*803CBA64 003C8864*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*803CBA68 003C8868*/ PPC::Runtime::ASM::bgelr();
/*803CBA6C 003C886C*/ PPC::Runtime::ASM::b(.L_803CBAC4);
RUNTIME_PPC_JUMP_LABEL(.L_803CBA70, 0x803CBA70) //this is a jump label
/*803CBA70 003C8870*/ PPC::Runtime::ASM::lwz(context->r5, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CBA74 003C8874*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803CBA78 003C8878*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803CBA7C 003C887C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803CBA80 003C8880*/ PPC::Runtime::ASM::cntlzw(context->r3, context->r3);
/*803CBA84 003C8884*/ PPC::Runtime::ASM::extrwi(context->r3, context->r3, 16, 11);
/*803CBA88 003C8888*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803CBA8C 003C888C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*803CBA90 003C8890*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803CBA94 003C8894*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803CBA98 003C8898*/ PPC::Runtime::ASM::beqlr();
/*803CBA9C 003C889C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r5));
/*803CBAA0 003C88A0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x8);
/*803CBAA4 003C88A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r5));
/*803CBAA8 003C88A8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803CBAAC, 0x803CBAAC) //this is a jump label
/*803CBAAC 003C88AC*/ PPC::Runtime::ASM::neg(context->r4, context->r4);
/*803CBAB0 003C88B0*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CBAB4 003C88B4*/ PPC::Runtime::ASM::subic(context->r0, context->r4, 0x1);
/*803CBAB8 003C88B8*/ PPC::Runtime::ASM::subfe(context->r0, context->r0, context->r4);
/*803CBABC 003C88BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f1, context->r3));
/*803CBAC0 003C88C0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803CBAC4, 0x803CBAC4) //this is a jump label
/*803CBAC4 003C88C4*/ PPC::Runtime::ASM::neg(context->r4, context->r4);
/*803CBAC8 003C88C8*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CBACC 003C88CC*/ PPC::Runtime::ASM::subic(context->r0, context->r4, 0x1);
/*803CBAD0 003C88D0*/ PPC::Runtime::ASM::subfe(context->r0, context->r0, context->r4);
/*803CBAD4 003C88D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f2, context->r3));
/*803CBAD8 003C88D8*/ PPC::Runtime::ASM::blr();
}