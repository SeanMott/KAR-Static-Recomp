//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803838A8(PPC::Runtime::GCContext* context)
{
/*803838A8 003806A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803838AC 003806AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803838B0 003806B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803838B4 003806B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBF9C @ Get_MemoryOffset_SDA21);
/*803838B8 003806B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803838BC 003806BC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBF94 @ Get_MemoryOffset_SDA21);
/*803838C0 003806C0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803838C4 003806C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803838C8 003806C8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803838CC 003806CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803838D0 003806D0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803838D4 003806D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803838D8 003806D8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803838DC 003806DC*/ PPC::Runtime::ASM::b(.L_8038390C);
RUNTIME_PPC_JUMP_LABEL(.L_803838E0, 0x803838E0) //this is a jump label
/*803838E0 003806E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803838E4 003806E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*803838E8 003806E8*/ PPC::Runtime::ASM::beq(.L_803838F4);
/*803838EC 003806EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803838F0 003806F0*/ PPC::Runtime::ASM::bne(.L_803838FC);
RUNTIME_PPC_JUMP_LABEL(.L_803838F4, 0x803838F4) //this is a jump label
/*803838F4 003806F4*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*803838F8 003806F8*/ PPC::Runtime::ASM::b(.L_80383914);
RUNTIME_PPC_JUMP_LABEL(.L_803838FC, 0x803838FC) //this is a jump label
/*803838FC 003806FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80383900 00380700*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80383904 00380704*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80383908 00380708*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8038390C, 0x8038390C) //this is a jump label
/*8038390C 0038070C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80383910 00380710*/ PPC::Runtime::ASM::bne(.L_803838E0);
RUNTIME_PPC_JUMP_LABEL(.L_80383914, 0x80383914) //this is a jump label
/* 80383914 00380714  57 E0 06 3F */ clrlwi. context->r0 , context->r31 , 24
/*80383918 00380718*/ PPC::Runtime::ASM::beq(.L_80383944);
/*8038391C 0038071C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80383920 00380720*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80383924 00380724*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBFAC @ Get_MemoryOffset_SDA21);
/*80383928 00380728*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBFA4 @ Get_MemoryOffset_SDA21);
/*8038392C 0038072C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80383930 00380730*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80383934 00380734*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80383938 00380738*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*8038393C 0038073C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80383940 00380740*/ PPC::Runtime::ASM::bl(fn_803842E8);
RUNTIME_PPC_JUMP_LABEL(.L_80383944, 0x80383944) //this is a jump label
/*80383944 00380744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80383948 00380748*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8038394C 0038074C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80383950 00380750*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80383954 00380754*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80383958 00380758*/ PPC::Runtime::ASM::blr();
}