//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800670B4(PPC::Runtime::GCContext* context)
{
/*800670B4 00063EB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800670B8 00063EB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800670BC 00063EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800670C0 00063EC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800670C4 00063EC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 800670C8 00063EC8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*800670CC 00063ECC*/ PPC::Runtime::ASM::beq(.L_80067148);
/*800670D0 00063ED0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800670D4 00063ED4*/ PPC::Runtime::ASM::blt(.L_80067148);
/*800670D8 00063ED8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x4);
/*800670DC 00063EDC*/ PPC::Runtime::ASM::bge(.L_80067148);
/*800670E0 00063EE0*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_225 @ Get_MemoryOffset_HighBit);
/*800670E4 00063EE4*/ PPC::Runtime::ASM::slwi(context->r31, context->r4, 3);
/*800670E8 00063EE8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, MemoryOffset_225 @ Get_MemoryOffset_LowBit);
/*800670EC 00063EEC*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r31);
/*800670F0 00063EF0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetViewport);
/*800670F4 00063EF4*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_226 @ Get_MemoryOffset_HighBit);
/*800670F8 00063EF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800670FC 00063EFC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, MemoryOffset_226 @ Get_MemoryOffset_LowBit);
/*80067100 00063F00*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r31);
/*80067104 00063F04*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetScissor);
/*80067108 00063F08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8006710C 00063F0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80067110 00063F10*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetViewportf);
/*80067114 00063F14*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80067118 00063F18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8006711C 00063F1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80067120 00063F20*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80067124 00063F24*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80067128 00063F28*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*8006712C 00063F2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067130 00063F30*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80067134 00063F34*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80067138 00063F38*/ PPC::Runtime::ASM::fdivs(context->f1, context->f3, context->f1);
/*8006713C 00063F3C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80067140 00063F40*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*80067144 00063F44*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetAspect);
RUNTIME_PPC_JUMP_LABEL(.L_80067148, 0x80067148) //this is a jump label
/*80067148 00063F48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8006714C 00063F4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80067150 00063F50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80067154 00063F54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80067158 00063F58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8006715C 00063F5C*/ PPC::Runtime::ASM::blr();
}