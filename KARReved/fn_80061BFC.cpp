//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80061BFC(PPC::Runtime::GCContext* context)
{
/*80061BFC 0005E9FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80061C00 0005EA00*/ PPC::Runtime::ASM::mflr(context->r0);
/*80061C04 0005EA04*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*80061C08 0005EA08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80061C0C 0005EA0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80061C10 0005EA10*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*80061C14 0005EA14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80061C18 0005EA18*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/* 80061C1C 0005EA1C  54 60 EF FF */ extrwi. context->r0 , context->r3 , 1 , 28
/*80061C20 0005EA20*/ PPC::Runtime::ASM::bne(.L_80061DD8);
/* 80061C24 0005EA24  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*80061C28 0005EA28*/ PPC::Runtime::ASM::beq(.L_80061DD8);
/*80061C2C 0005EA2C*/ PPC::Runtime::ASM::addis(context->r4, context->r31, 0x1);
/*80061C30 0005EA30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7480, context->r4));
/*80061C34 0005EA34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x27);
/*80061C38 0005EA38*/ PPC::Runtime::ASM::beq(.L_80061DD8);
/*80061C3C 0005EA3C*/ PPC::Runtime::ASM::lis(context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_HighBit);
/*80061C40 0005EA40*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80061C44 0005EA44*/ PPC::Runtime::ASM::addi(context->r7, context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_LowBit);
/*80061C48 0005EA48*/ PPC::Runtime::ASM::li(context->r0, 0x45);
/*80061C4C 0005EA4C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80061C50 0005EA50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80061C54 0005EA54*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80061C58 0005EA58*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80061C5C, 0x80061C5C) //this is a jump label
/*80061C5C 0005EA5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80061C60 0005EA60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x27);
/*80061C64 0005EA64*/ PPC::Runtime::ASM::bne(.L_80061C8C);
/*80061C68 0005EA68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80061C6C 0005EA6C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80061C70 0005EA70*/ PPC::Runtime::ASM::bne(.L_80061C8C);
/*80061C74 0005EA74*/ PPC::Runtime::ASM::lis(context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_HighBit);
/*80061C78 0005EA78*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 4);
/*80061C7C 0005EA7C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_LowBit);
/*80061C80 0005EA80*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80061C84 0005EA84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80061C88 0005EA88*/ PPC::Runtime::ASM::b(.L_80061C98);
RUNTIME_PPC_JUMP_LABEL(.L_80061C8C, 0x80061C8C) //this is a jump label
/*80061C8C 0005EA8C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x10);
/*80061C90 0005EA90*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80061C94 0005EA94*/ PPC::Runtime::ASM::bdnz(.L_80061C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80061C98, 0x80061C98) //this is a jump label
/*80061C98 0005EA98*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80061C9C 0005EA9C*/ PPC::Runtime::ASM::bne(.L_80061CEC);
/*80061CA0 0005EAA0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80061CA4 0005EAA4*/ PPC::Runtime::ASM::li(context->r0, 0x45);
/*80061CA8 0005EAA8*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80061CAC 0005EAAC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80061CB0, 0x80061CB0) //this is a jump label
/*80061CB0 0005EAB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80061CB4 0005EAB4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x27);
/*80061CB8 0005EAB8*/ PPC::Runtime::ASM::bne(.L_80061CE0);
/*80061CBC 0005EABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80061CC0 0005EAC0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80061CC4 0005EAC4*/ PPC::Runtime::ASM::bne(.L_80061CE0);
/*80061CC8 0005EAC8*/ PPC::Runtime::ASM::lis(context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_HighBit);
/*80061CCC 0005EACC*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 4);
/*80061CD0 0005EAD0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfAudioFilePaths @ Get_MemoryOffset_LowBit);
/*80061CD4 0005EAD4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80061CD8 0005EAD8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80061CDC 0005EADC*/ PPC::Runtime::ASM::b(.L_80061CEC);
RUNTIME_PPC_JUMP_LABEL(.L_80061CE0, 0x80061CE0) //this is a jump label
/*80061CE0 0005EAE0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x10);
/*80061CE4 0005EAE4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80061CE8 0005EAE8*/ PPC::Runtime::ASM::bdnz(.L_80061CB0);
RUNTIME_PPC_JUMP_LABEL(.L_80061CEC, 0x80061CEC) //this is a jump label
/*80061CEC 0005EAEC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80061CF0 0005EAF0*/ PPC::Runtime::ASM::beq(.L_80061DD8);
/*80061CF4 0005EAF4*/ PPC::Runtime::ASM::li(context->r0, 0x27);
/*80061CF8 0005EAF8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80061CFC 0005EAFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7480, context->r4));
/*80061D00 0005EB00*/ PPC::Runtime::ASM::li(context->r4, lbl_805D529C @ Get_MemoryOffset_SDA21);
/*80061D04 0005EB04*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*80061D08 0005EB08*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80061D0C 0005EB0C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80061D10 0005EB10*/ PPC::Runtime::ASM::bl(fn_strcat);
/*80061D14 0005EB14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/* 80061D18 0005EB18  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*80061D1C 0005EB1C*/ PPC::Runtime::ASM::bne(.L_80061D60);
/*80061D20 0005EB20*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*80061D24 0005EB24*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*80061D28 0005EB28*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r3));
/*80061D2C 0005EB2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xff);
/*80061D30 0005EB30*/ PPC::Runtime::ASM::ble(.L_80061D3C);
/*80061D34 0005EB34*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80061D38 0005EB38*/ PPC::Runtime::ASM::b(.L_80061D48);
RUNTIME_PPC_JUMP_LABEL(.L_80061D3C, 0x80061D3C) //this is a jump label
/*80061D3C 0005EB3C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80061D40 0005EB40*/ PPC::Runtime::ASM::bge(.L_80061D48);
/*80061D44 0005EB44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80061D48, 0x80061D48) //this is a jump label
/*80061D48 0005EB48*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80061D4C 0005EB4C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*80061D50 0005EB50*/ PPC::Runtime::ASM::li(context->r5, 0x3f);
/*80061D54 0005EB54*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80061D58 0005EB58*/ PPC::Runtime::ASM::bl(fn_804456C0);
/*80061D5C 0005EB5C*/ PPC::Runtime::ASM::b(.L_80061DD8);
RUNTIME_PPC_JUMP_LABEL(.L_80061D60, 0x80061D60) //this is a jump label
/*80061D60 0005EB60*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80061D64 0005EB64*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80061D68 0005EB68*/ PPC::Runtime::ASM::li(context->r5, 0x3f);
/*80061D6C 0005EB6C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80061D70 0005EB70*/ PPC::Runtime::ASM::bl(fn_804456C0);
/*80061D74 0005EB74*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x1);
/*80061D78 0005EB78*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80061D7C 0005EB7C  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80061D80 0005EB80*/ PPC::Runtime::ASM::beq(.L_80061DD8);
/*80061D84 0005EB84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*80061D88 0005EB88*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80061D8C 0005EB8C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*80061D90 0005EB90*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80061D94 0005EB94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*80061D98 0005EB98*/ PPC::Runtime::ASM::bl(fn_80445810);
/*80061D9C 0005EB9C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*80061DA0 0005EBA0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*80061DA4 0005EBA4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r3));
/*80061DA8 0005EBA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xff);
/*80061DAC 0005EBAC*/ PPC::Runtime::ASM::ble(.L_80061DB8);
/*80061DB0 0005EBB0*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80061DB4 0005EBB4*/ PPC::Runtime::ASM::b(.L_80061DC4);
RUNTIME_PPC_JUMP_LABEL(.L_80061DB8, 0x80061DB8) //this is a jump label
/*80061DB8 0005EBB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80061DBC 0005EBBC*/ PPC::Runtime::ASM::bge(.L_80061DC4);
/*80061DC0 0005EBC0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80061DC4, 0x80061DC4) //this is a jump label
/*80061DC4 0005EBC4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r3));
/*80061DC8 0005EBC8*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 24);
/*80061DCC 0005EBCC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80061DD0 0005EBD0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80061DD4 0005EBD4*/ PPC::Runtime::ASM::bl(fn_8044576C);
RUNTIME_PPC_JUMP_LABEL(.L_80061DD8, 0x80061DD8) //this is a jump label
/*80061DD8 0005EBD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80061DDC 0005EBDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80061DE0 0005EBE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80061DE4 0005EBE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80061DE8 0005EBE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80061DEC 0005EBEC*/ PPC::Runtime::ASM::blr();
}