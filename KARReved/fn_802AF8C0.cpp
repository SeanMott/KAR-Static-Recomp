//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802AF8C0(PPC::Runtime::GCContext* context)
{
/*802AF8C0 002AC6C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AF8C4 002AC6C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AF8C8 002AC6C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF8CC 002AC6CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF8D0 002AC6D0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AF8D4 002AC6D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AF8D8 002AC6D8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AF8DC 002AC6DC*/ PPC::Runtime::ASM::beq(.L_802AF9F4);
/*802AF8E0 002AC6E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C1150 @ Get_MemoryOffset_HighBit);
/*802AF8E4 002AC6E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C1150 @ Get_MemoryOffset_LowBit);
/*802AF8E8 002AC6E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF8EC 002AC6EC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AF8F0 002AC6F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF8F4 002AC6F4*/ PPC::Runtime::ASM::beq(.L_802AF9E4);
/*802AF8F8 002AC6F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C0F9C @ Get_MemoryOffset_HighBit);
/*802AF8FC 002AC6FC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AF900 002AC700*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C0F9C @ Get_MemoryOffset_LowBit);
/*802AF904 002AC704*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF908 002AC708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AF90C 002AC70C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF910 002AC710*/ PPC::Runtime::ASM::beq(.L_802AF9D0);
/*802AF914 002AC714*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802AF918 002AC718*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x38);
/*802AF91C 002AC71C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802AF920 002AC720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF924 002AC724*/ PPC::Runtime::ASM::beq(.L_802AF958);
/*802AF928 002AC728*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802AF92C 002AC72C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AF930 002AC730*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802AF934 002AC734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802AF938 002AC738*/ PPC::Runtime::ASM::beq(.L_802AF958);
/*802AF93C 002AC73C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802AF940 002AC740*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802AF944 002AC744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802AF948 002AC748*/ PPC::Runtime::ASM::beq(.L_802AF958);
/*802AF94C 002AC74C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802AF950 002AC750*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802AF954 002AC754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AF958, 0x802AF958) //this is a jump label
/*802AF958 002AC758*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AF95C 002AC75C*/ PPC::Runtime::ASM::beq(.L_802AF9D0);
/*802AF960 002AC760*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AF964 002AC764*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802AF968 002AC768*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AF96C 002AC76C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF970 002AC770*/ PPC::Runtime::ASM::beq(.L_802AF994);
/*802AF974 002AC774*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AF978 002AC778*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AF97C 002AC77C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AF980 002AC780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802AF984 002AC784*/ PPC::Runtime::ASM::beq(.L_802AF994);
/*802AF988 002AC788*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AF98C 002AC78C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AF990 002AC790*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AF994, 0x802AF994) //this is a jump label
/*802AF994 002AC794*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AF998 002AC798*/ PPC::Runtime::ASM::beq(.L_802AF9D0);
/*802AF99C 002AC79C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AF9A0 002AC7A0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AF9A4 002AC7A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AF9A8 002AC7A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF9AC 002AC7AC*/ PPC::Runtime::ASM::beq(.L_802AF9D0);
/*802AF9B0 002AC7B0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AF9B4 002AC7B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802AF9B8 002AC7B8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AF9BC 002AC7BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF9C0 002AC7C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AF9C4 002AC7C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AF9C8 002AC7C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AF9CC 002AC7CC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AF9D0, 0x802AF9D0) //this is a jump label
/*802AF9D0 002AC7D0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AF9D4 002AC7D4*/ PPC::Runtime::ASM::beq(.L_802AF9E4);
/*802AF9D8 002AC7D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AF9DC 002AC7DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AF9E0 002AC7E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AF9E4, 0x802AF9E4) //this is a jump label
/*802AF9E4 002AC7E4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AF9E8 002AC7E8*/ PPC::Runtime::ASM::ble(.L_802AF9F4);
/*802AF9EC 002AC7EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AF9F0 002AC7F0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AF9F4, 0x802AF9F4) //this is a jump label
/*802AF9F4 002AC7F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF9F8 002AC7F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AF9FC 002AC7FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AFA00 002AC800*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AFA04 002AC804*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AFA08 002AC808*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AFA0C 002AC80C*/ PPC::Runtime::ASM::blr();
}