//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028581C(PPC::Runtime::GCContext* context)
{
/*8028581C 0028261C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80285820 00282620*/ PPC::Runtime::ASM::mflr(context->r0);
/*80285824 00282624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80285828 00282628*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028582C 0028262C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80285830 00282630*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80285834 00282634  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80285838 00282638*/ PPC::Runtime::ASM::beq(.L_80285944);
/*8028583C 0028263C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6F28 @ Get_MemoryOffset_HighBit);
/*80285840 00282640*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x58);
/*80285844 00282644*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6F28 @ Get_MemoryOffset_LowBit);
/*80285848 00282648*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028584C 0028264C*/ PPC::Runtime::ASM::beq(.L_80285870);
/*80285850 00282650*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80285854 00282654*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x58);
/*80285858 00282658*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8028585C 0028265C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*80285860 00282660*/ PPC::Runtime::ASM::beq(.L_80285870);
/*80285864 00282664*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80285868 00282668*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8028586C 0028266C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80285870, 0x80285870) //this is a jump label
/*80285870 00282670*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80285874 00282674*/ PPC::Runtime::ASM::beq(.L_80285934);
/*80285878 00282678*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6F70 @ Get_MemoryOffset_HighBit);
/*8028587C 0028267C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*80285880 00282680*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6F70 @ Get_MemoryOffset_LowBit);
/*80285884 00282684*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80285888 00282688*/ PPC::Runtime::ASM::beq(.L_802858C0);
/*8028588C 0028268C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*80285890 00282690*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*80285894 00282694*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*80285898 00282698*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8028589C 0028269C*/ PPC::Runtime::ASM::beq(.L_802858C0);
/*802858A0 002826A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802858A4 002826A4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*802858A8 002826A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802858AC 002826AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802858B0 002826B0*/ PPC::Runtime::ASM::beq(.L_802858C0);
/*802858B4 002826B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802858B8 002826B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802858BC 002826BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802858C0, 0x802858C0) //this is a jump label
/*802858C0 002826C0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802858C4 002826C4*/ PPC::Runtime::ASM::beq(.L_80285934);
/*802858C8 002826C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802858CC 002826CC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*802858D0 002826D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802858D4 002826D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802858D8 002826D8*/ PPC::Runtime::ASM::beq(.L_802858FC);
/*802858DC 002826DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802858E0 002826E0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*802858E4 002826E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802858E8 002826E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802858EC 002826EC*/ PPC::Runtime::ASM::beq(.L_802858FC);
/*802858F0 002826F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802858F4 002826F4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802858F8 002826F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802858FC, 0x802858FC) //this is a jump label
/*802858FC 002826FC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80285900 00282700*/ PPC::Runtime::ASM::beq(.L_80285934);
/*80285904 00282704*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*80285908 00282708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*8028590C 0028270C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80285910 00282710*/ PPC::Runtime::ASM::beq(.L_80285934);
/*80285914 00282714*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*80285918 00282718*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028591C 0028271C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*80285920 00282720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80285924 00282724*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80285928 00282728*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8028592C 0028272C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80285930 00282730*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80285934, 0x80285934) //this is a jump label
/*80285934 00282734*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80285938 00282738*/ PPC::Runtime::ASM::ble(.L_80285944);
/*8028593C 0028273C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80285940 00282740*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80285944, 0x80285944) //this is a jump label
/*80285944 00282744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80285948 00282748*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028594C 0028274C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80285950 00282750*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80285954 00282754*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80285958 00282758*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028595C 0028275C*/ PPC::Runtime::ASM::blr();
}