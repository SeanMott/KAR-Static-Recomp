//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "DCFlushRange.hpp"



void fn_803ED780(PPC::Runtime::GCContext* context)
{
/*803ED780 003EA580*/ PPC::Runtime::ASM::mflr(context->r0);
/*803ED784 003EA584*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*803ED788 003EA588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803ED78C 003EA58C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*803ED790 003EA590*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180576620 @ Get_MemoryOffset_HighBit);
/*803ED794 003EA594*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803ED798 003EA598*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180576620 @ Get_MemoryOffset_LowBit);
/*803ED79C 003EA59C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 803ED7A0 003EA5A0  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803ED7A4 003EA5A4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803ED7A8 003EA5A8*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803ED7AC 003EA5AC*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803ED7B0 003EA5B0*/ PPC::Runtime::ASM::beq(.L_803ED7F0);
/*803ED7B4 003EA5B4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803ED7B8 003EA5B8*/ PPC::Runtime::ASM::ble(.L_803ED7C0);
/*803ED7BC 003EA5BC*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED7C0, 0x803ED7C0) //this is a jump label
/*803ED7C0 003EA5C0*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803ED7C4 003EA5C4*/ PPC::Runtime::ASM::bge(.L_803ED7CC);
/*803ED7C8 003EA5C8*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED7CC, 0x803ED7CC) //this is a jump label
/*803ED7CC 003EA5CC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803ED7D0 003EA5D0*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803ED7D4 003EA5D4*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803ED7D8 003EA5D8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED7DC 003EA5DC*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803ED7E0 003EA5E0*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED7E4 003EA5E4*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803ED7E8 003EA5E8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803ED7EC 003EA5EC*/ PPC::Runtime::ASM::b(.L_803ED800);
RUNTIME_PPC_JUMP_LABEL(.L_803ED7F0, 0x803ED7F0) //this is a jump label
/*803ED7F0 003EA5F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803ED7F4 003EA5F4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED7F8 003EA5F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803ED7FC 003EA5FC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803ED800, 0x803ED800) //this is a jump label
/*803ED800 003EA600*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803ED804 003EA604*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE104 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED808 003EA608*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803ED80C 003EA60C  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803ED810 003EA610*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803ED814 003EA614*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803ED818 003EA618*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803ED81C 003EA61C*/ PPC::Runtime::ASM::beq(.L_803ED85C);
/*803ED820 003EA620*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803ED824 003EA624*/ PPC::Runtime::ASM::ble(.L_803ED82C);
/*803ED828 003EA628*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED82C, 0x803ED82C) //this is a jump label
/*803ED82C 003EA62C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803ED830 003EA630*/ PPC::Runtime::ASM::bge(.L_803ED838);
/*803ED834 003EA634*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED838, 0x803ED838) //this is a jump label
/*803ED838 003EA638*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*803ED83C 003EA63C*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803ED840 003EA640*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803ED844 003EA644*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE104 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED848 003EA648*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803ED84C 003EA64C*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE104 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED850 003EA650*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803ED854 003EA654*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*803ED858 003EA658*/ PPC::Runtime::ASM::b(.L_803ED86C);
RUNTIME_PPC_JUMP_LABEL(.L_803ED85C, 0x803ED85C) //this is a jump label
/*803ED85C 003EA65C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803ED860 003EA660*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE104 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED864 003EA664*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*803ED868 003EA668*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803ED86C, 0x803ED86C) //this is a jump label
/*803ED86C 003EA66C*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803ED870 003EA670*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE108 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED874 003EA674*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803ED878 003EA678  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803ED87C 003EA67C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803ED880 003EA680*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803ED884 003EA684*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803ED888 003EA688*/ PPC::Runtime::ASM::beq(.L_803ED8C8);
/*803ED88C 003EA68C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803ED890 003EA690*/ PPC::Runtime::ASM::ble(.L_803ED898);
/*803ED894 003EA694*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED898, 0x803ED898) //this is a jump label
/*803ED898 003EA698*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803ED89C 003EA69C*/ PPC::Runtime::ASM::bge(.L_803ED8A4);
/*803ED8A0 003EA6A0*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED8A4, 0x803ED8A4) //this is a jump label
/*803ED8A4 003EA6A4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803ED8A8 003EA6A8*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803ED8AC 003EA6AC*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803ED8B0 003EA6B0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE108 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED8B4 003EA6B4*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803ED8B8 003EA6B8*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE108 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED8BC 003EA6BC*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803ED8C0 003EA6C0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803ED8C4 003EA6C4*/ PPC::Runtime::ASM::b(.L_803ED8D8);
RUNTIME_PPC_JUMP_LABEL(.L_803ED8C8, 0x803ED8C8) //this is a jump label
/*803ED8C8 003EA6C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803ED8CC 003EA6CC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE108 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED8D0 003EA6D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803ED8D4 003EA6D4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803ED8D8, 0x803ED8D8) //this is a jump label
/*803ED8D8 003EA6D8*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803ED8DC 003EA6DC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE10C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED8E0 003EA6E0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803ED8E4 003EA6E4  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803ED8E8 003EA6E8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803ED8EC 003EA6EC*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803ED8F0 003EA6F0*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803ED8F4 003EA6F4*/ PPC::Runtime::ASM::beq(.L_803ED934);
/*803ED8F8 003EA6F8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803ED8FC 003EA6FC*/ PPC::Runtime::ASM::ble(.L_803ED904);
/*803ED900 003EA700*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED904, 0x803ED904) //this is a jump label
/*803ED904 003EA704*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803ED908 003EA708*/ PPC::Runtime::ASM::bge(.L_803ED910);
/*803ED90C 003EA70C*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED910, 0x803ED910) //this is a jump label
/*803ED910 003EA710*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*803ED914 003EA714*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803ED918 003EA718*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803ED91C 003EA71C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE10C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED920 003EA720*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803ED924 003EA724*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE10C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED928 003EA728*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803ED92C 003EA72C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r3));
/*803ED930 003EA730*/ PPC::Runtime::ASM::b(.L_803ED944);
RUNTIME_PPC_JUMP_LABEL(.L_803ED934, 0x803ED934) //this is a jump label
/*803ED934 003EA734*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803ED938 003EA738*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE10C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED93C 003EA73C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*803ED940 003EA740*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803ED944, 0x803ED944) //this is a jump label
/*803ED944 003EA744*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803ED948 003EA748*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED94C 003EA74C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803ED950 003EA750  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803ED954 003EA754*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803ED958 003EA758*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803ED95C 003EA75C*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803ED960 003EA760*/ PPC::Runtime::ASM::beq(.L_803ED9A0);
/*803ED964 003EA764*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803ED968 003EA768*/ PPC::Runtime::ASM::ble(.L_803ED970);
/*803ED96C 003EA76C*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED970, 0x803ED970) //this is a jump label
/*803ED970 003EA770*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803ED974 003EA774*/ PPC::Runtime::ASM::bge(.L_803ED97C);
/*803ED978 003EA778*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED97C, 0x803ED97C) //this is a jump label
/*803ED97C 003EA77C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803ED980 003EA780*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803ED984 003EA784*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803ED988 003EA788*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED98C 003EA78C*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803ED990 003EA790*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED994 003EA794*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803ED998 003EA798*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803ED99C 003EA79C*/ PPC::Runtime::ASM::b(.L_803ED9B0);
RUNTIME_PPC_JUMP_LABEL(.L_803ED9A0, 0x803ED9A0) //this is a jump label
/*803ED9A0 003EA7A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803ED9A4 003EA7A4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED9A8 003EA7A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803ED9AC 003EA7AC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803ED9B0, 0x803ED9B0) //this is a jump label
/*803ED9B0 003EA7B0*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803ED9B4 003EA7B4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED9B8 003EA7B8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803ED9BC 003EA7BC  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803ED9C0 003EA7C0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803ED9C4 003EA7C4*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803ED9C8 003EA7C8*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803ED9CC 003EA7CC*/ PPC::Runtime::ASM::beq(.L_803EDA0C);
/*803ED9D0 003EA7D0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803ED9D4 003EA7D4*/ PPC::Runtime::ASM::ble(.L_803ED9DC);
/*803ED9D8 003EA7D8*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED9DC, 0x803ED9DC) //this is a jump label
/*803ED9DC 003EA7DC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803ED9E0 003EA7E0*/ PPC::Runtime::ASM::bge(.L_803ED9E8);
/*803ED9E4 003EA7E4*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803ED9E8, 0x803ED9E8) //this is a jump label
/*803ED9E8 003EA7E8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*803ED9EC 003EA7EC*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803ED9F0 003EA7F0*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803ED9F4 003EA7F4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803ED9F8 003EA7F8*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803ED9FC 003EA7FC*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA00 003EA800*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803EDA04 003EA804*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r3));
/*803EDA08 003EA808*/ PPC::Runtime::ASM::b(.L_803EDA1C);
RUNTIME_PPC_JUMP_LABEL(.L_803EDA0C, 0x803EDA0C) //this is a jump label
/*803EDA0C 003EA80C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803EDA10 003EA810*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA14 003EA814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*803EDA18 003EA818*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803EDA1C, 0x803EDA1C) //this is a jump label
/*803EDA1C 003EA81C*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803EDA20 003EA820*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA24 003EA824*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803EDA28 003EA828  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803EDA2C 003EA82C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803EDA30 003EA830*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803EDA34 003EA834*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803EDA38 003EA838*/ PPC::Runtime::ASM::beq(.L_803EDA78);
/*803EDA3C 003EA83C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803EDA40 003EA840*/ PPC::Runtime::ASM::ble(.L_803EDA48);
/*803EDA44 003EA844*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803EDA48, 0x803EDA48) //this is a jump label
/*803EDA48 003EA848*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803EDA4C 003EA84C*/ PPC::Runtime::ASM::bge(.L_803EDA54);
/*803EDA50 003EA850*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803EDA54, 0x803EDA54) //this is a jump label
/*803EDA54 003EA854*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803EDA58 003EA858*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803EDA5C 003EA85C*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803EDA60 003EA860*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA64 003EA864*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803EDA68 003EA868*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA6C 003EA86C*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803EDA70 003EA870*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803EDA74 003EA874*/ PPC::Runtime::ASM::b(.L_803EDA88);
RUNTIME_PPC_JUMP_LABEL(.L_803EDA78, 0x803EDA78) //this is a jump label
/*803EDA78 003EA878*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803EDA7C 003EA87C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA80 003EA880*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803EDA84 003EA884*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803EDA88, 0x803EDA88) //this is a jump label
/*803EDA88 003EA888*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803EDA8C 003EA88C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE11C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDA90 003EA890*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803EDA94 003EA894  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803EDA98 003EA898*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803EDA9C 003EA89C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803EDAA0 003EA8A0*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803EDAA4 003EA8A4*/ PPC::Runtime::ASM::beq(.L_803EDAE4);
/*803EDAA8 003EA8A8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803EDAAC 003EA8AC*/ PPC::Runtime::ASM::ble(.L_803EDAB4);
/*803EDAB0 003EA8B0*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803EDAB4, 0x803EDAB4) //this is a jump label
/*803EDAB4 003EA8B4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803EDAB8 003EA8B8*/ PPC::Runtime::ASM::bge(.L_803EDAC0);
/*803EDABC 003EA8BC*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803EDAC0, 0x803EDAC0) //this is a jump label
/*803EDAC0 003EA8C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r3));
/*803EDAC4 003EA8C4*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803EDAC8 003EA8C8*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803EDACC 003EA8CC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE11C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDAD0 003EA8D0*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803EDAD4 003EA8D4*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE11C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDAD8 003EA8D8*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803EDADC 003EA8DC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r3));
/*803EDAE0 003EA8E0*/ PPC::Runtime::ASM::b(.L_803EDAF4);
RUNTIME_PPC_JUMP_LABEL(.L_803EDAE4, 0x803EDAE4) //this is a jump label
/*803EDAE4 003EA8E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803EDAE8 003EA8E8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE11C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDAEC 003EA8EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r3));
/*803EDAF0 003EA8F0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803EDAF4, 0x803EDAF4) //this is a jump label
/*803EDAF4 003EA8F4*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*803EDAF8 003EA8F8*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDAFC 003EA8FC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/* 803EDB00 003EA900  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*803EDB04 003EA904*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*803EDB08 003EA908*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*803EDB0C 003EA90C*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r4);
/*803EDB10 003EA910*/ PPC::Runtime::ASM::beq(.L_803EDB50);
/*803EDB14 003EA914*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x14);
/*803EDB18 003EA918*/ PPC::Runtime::ASM::ble(.L_803EDB20);
/*803EDB1C 003EA91C*/ PPC::Runtime::ASM::li(context->r4, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803EDB20, 0x803EDB20) //this is a jump label
/*803EDB20 003EA920*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x14);
/*803EDB24 003EA924*/ PPC::Runtime::ASM::bge(.L_803EDB2C);
/*803EDB28 003EA928*/ PPC::Runtime::ASM::li(context->r4, -0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803EDB2C, 0x803EDB2C) //this is a jump label
/*803EDB2C 003EA92C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*803EDB30 003EA930*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803EDB34 003EA934*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0xa0);
/*803EDB38 003EA938*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDB3C 003EA93C*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*803EDB40 003EA940*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDB44 003EA944*/ PPC::Runtime::ASM::extsh(context->r0, context->r0);
/*803EDB48 003EA948*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*803EDB4C 003EA94C*/ PPC::Runtime::ASM::b(.L_803EDB60);
RUNTIME_PPC_JUMP_LABEL(.L_803EDB50, 0x803EDB50) //this is a jump label
/*803EDB50 003EA950*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803EDB54 003EA954*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDB58 003EA958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*803EDB5C 003EA95C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803EDB60, 0x803EDB60) //this is a jump label
/*803EDB60 003EA960*/ PPC::Runtime::ASM::li(context->r4, 0x36);
/*803EDB64 003EA964*/ PPC::Runtime::ASM::bl(DCFlushRange);
/*803EDB68 003EA968*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803EDB6C 003EA96C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803EDB70 003EA970*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EDB74 003EA974*/ PPC::Runtime::ASM::blr();
}