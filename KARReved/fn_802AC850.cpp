//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802BABB4.hpp"
#include "fn_802DB74C.hpp"
#include "fn_802A08CC.hpp"
#include "fn_80324258.hpp"
#include "fn_80382380.hpp"
#include "fn_803789C4.hpp"
#include "fn_803826E4.hpp"
#include "fn_8031447C.hpp"
#include "fn_803768D8.hpp"
#include "fn_802C80DC.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802CB234.hpp"
#include "fn_8037A94C.hpp"
#include "fn_802B88F4.hpp"
#include "fn_802B7DAC.hpp"



void fn_802AC850(PPC::Runtime::GCContext* context)
{
/*802AC850 002A9650*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*802AC854 002A9654*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AC858 002A9658*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802AC85C 002A965C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802AC860 002A9660*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802AC864 002A9664*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802AC868 002A9668*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802AC86C 002A966C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*802AC870 002A9670*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802AC874 002A9674*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802AC878 002A9678*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*802AC87C 002A967C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802AC880 002A9680*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_802AC884, 0x802AC884) //this is a jump label
/*802AC884 002A9684*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802AC888 002A9688*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x4);
/*802AC88C 002A968C*/ PPC::Runtime::ASM::bl(fn_8038DBC8);
/*802AC890 002A9690*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*802AC894 002A9694*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0xf4);
/*802AC898 002A9698*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*802AC89C 002A969C*/ PPC::Runtime::ASM::blt(.L_802AC884);
/*802AC8A0 002A96A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802AC8A4 002A96A4*/ PPC::Runtime::ASM::bl(fn_802BABB4);
/* 802AC8A8 002A96A8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802AC8AC 002A96AC*/ PPC::Runtime::ASM::beq(.L_802AC8D4);
/*802AC8B0 002A96B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802AC8B4 002A96B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AC8B8 002A96B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8090 @ Get_MemoryOffset_SDA21);
/*802AC8BC 002A96BC*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8088 @ Get_MemoryOffset_SDA21);
/*802AC8C0 002A96C0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802AC8C4 002A96C4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802AC8C8 002A96C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r3));
/*802AC8CC 002A96CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 27, 27);
/*802AC8D0 002A96D0*/ PPC::Runtime::ASM::beq(.L_802ACDB0);
RUNTIME_PPC_JUMP_LABEL(.L_802AC8D4, 0x802AC8D4) //this is a jump label
/*802AC8D4 002A96D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802AC8D8 002A96D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AC8DC 002A96DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802AC8E0 002A96E0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802AC8E4 002A96E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802AC8E8 002A96E8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802AC8EC 002A96EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AC8F0 002A96F0*/ PPC::Runtime::ASM::bl(fn_802DB74C);
/*802AC8F4 002A96F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802AC8F8 002A96F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AC8FC 002A96FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D80A0 @ Get_MemoryOffset_SDA21);
/*802AC900 002A9700*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8098 @ Get_MemoryOffset_SDA21);
/*802AC904 002A9704*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802AC908 002A9708*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802AC90C 002A970C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BFC38 @ Get_MemoryOffset_HighBit);
/*802AC910 002A9710*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802AC914 002A9714*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804BFC38 @ Get_MemoryOffset_LowBit);
/*802AC918 002A9718*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802AC91C 002A971C*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x18);
/*802AC920 002A9720*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*802AC924 002A9724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*802AC928 002A9728*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AC92C 002A972C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802AC930 002A9730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802AC934 002A9734*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802AC938 002A9738*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*802AC93C 002A973C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802AC940 002A9740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802AC944 002A9744*/ PPC::Runtime::ASM::b(.L_802AC95C);
RUNTIME_PPC_JUMP_LABEL(.L_802AC948, 0x802AC948) //this is a jump label
/*802AC948 002A9748*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x8);
/*802AC94C 002A974C*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x14);
/*802AC950 002A9750*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*802AC954 002A9754*/ PPC::Runtime::ASM::nop();
/*802AC958 002A9758*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_802AC95C, 0x802AC95C) //this is a jump label
/*802AC95C 002A975C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r30);
/*802AC960 002A9760*/ PPC::Runtime::ASM::bne(.L_802AC948);
/*802AC964 002A9764*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BFC44 @ Get_MemoryOffset_HighBit);
/*802AC968 002A9768*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
/*802AC96C 002A976C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804BFC44 @ Get_MemoryOffset_LowBit);
/*802AC970 002A9770*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*802AC974 002A9774*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*802AC978 002A9778*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*802AC97C 002A977C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*802AC980 002A9780*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802AC984 002A9784*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802AC988 002A9788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802AC98C 002A978C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802AC990 002A9790*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802AC994 002A9794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802AC998 002A9798*/ PPC::Runtime::ASM::bl(fn_802A08CC);
/*802AC99C 002A979C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802AC9A0 002A97A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5c8);
/*802AC9A4 002A97A4*/ PPC::Runtime::ASM::bl(fn_80324258);
/*802AC9A8 002A97A8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802AC9AC 002A97AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AC9B0 002A97B0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7E88 @ Get_MemoryOffset_SDA21);
/*802AC9B4 002A97B4*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7E80 @ Get_MemoryOffset_SDA21);
/*802AC9B8 002A97B8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802AC9BC 002A97BC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802AC9C0 002A97C0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802AC9C4 002A97C4*/ PPC::Runtime::ASM::b(.L_802AC9E8);
RUNTIME_PPC_JUMP_LABEL(.L_802AC9C8, 0x802AC9C8) //this is a jump label
/*802AC9C8 002A97C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802AC9CC 002A97CC*/ PPC::Runtime::ASM::bl(fn_80382380);
/*802AC9D0 002A97D0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802AC9D4 002A97D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802AC9D8 002A97D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*802AC9DC 002A97DC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AC9E0 002A97E0*/ PPC::Runtime::ASM::bctrl();
/*802AC9E4 002A97E4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802AC9E8, 0x802AC9E8) //this is a jump label
/*802AC9E8 002A97E8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802AC9EC 002A97EC*/ PPC::Runtime::ASM::bne(.L_802AC9C8);
/*802AC9F0 002A97F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802AC9F4 002A97F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5cc);
/*802AC9F8 002A97F8*/ PPC::Runtime::ASM::bl(fn_803789C4);
/*802AC9FC 002A97FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACA00 002A9800*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x68c);
/*802ACA04 002A9804*/ PPC::Runtime::ASM::bl(fn_803826E4);
/*802ACA08 002A9808*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACA0C 002A980C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACA10 002A9810*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EA0 @ Get_MemoryOffset_SDA21);
/*802ACA14 002A9814*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7E98 @ Get_MemoryOffset_SDA21);
/*802ACA18 002A9818*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACA1C 002A981C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACA20 002A9820*/ PPC::Runtime::ASM::bl(fn_8031447C);
/*802ACA24 002A9824*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACA28 002A9828*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5c0);
/*802ACA2C 002A982C*/ PPC::Runtime::ASM::bl(fn_803768D8);
/*802ACA30 002A9830*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACA34 002A9834*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACA38 002A9838*/ PPC::Runtime::ASM::li(context->r5, lbl_805D80B0 @ Get_MemoryOffset_SDA21);
/*802ACA3C 002A983C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D80A8 @ Get_MemoryOffset_SDA21);
/*802ACA40 002A9840*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACA44 002A9844*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACA48 002A9848*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802ACA4C 002A984C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802ACA50 002A9850*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACA54 002A9854*/ PPC::Runtime::ASM::bctrl();
/*802ACA58 002A9858*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*802ACA5C 002A985C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*802ACA60 002A9860*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_802ACA64, 0x802ACA64) //this is a jump label
/*802ACA64 002A9864*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACA68 002A9868*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACA6C 002A986C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACA70 002A9870*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACA74 002A9874*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACA78 002A9878*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACA7C 002A987C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x8);
/*802ACA80 002A9880*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*802ACA84 002A9884*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802ACA88 002A9888*/ PPC::Runtime::ASM::beq(.L_802ACBAC);
/*802ACA8C 002A988C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACA90 002A9890*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACA94 002A9894*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACA98 002A9898*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACA9C 002A989C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACAA0 002A98A0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACAA4 002A98A4*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x8);
/*802ACAA8 002A98A8*/ PPC::Runtime::ASM::lwzx(context->r27, context->r3, context->r0);
/*802ACAAC 002A98AC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802ACAB0 002A98B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802ACAB4 002A98B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r12));
/*802ACAB8 002A98B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACABC 002A98BC*/ PPC::Runtime::ASM::bctrl();
/*802ACAC0 002A98C0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACAC4 002A98C4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802ACAC8 002A98C8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802ACACC 002A98CC*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x72c);
/*802ACAD0 002A98D0*/ PPC::Runtime::ASM::bl(fn_802C80DC);
/*802ACAD4 002A98D4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802ACAD8 002A98D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802ACADC 002A98DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r12));
/*802ACAE0 002A98E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACAE4 002A98E4*/ PPC::Runtime::ASM::bctrl();
/*802ACAE8 002A98E8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACAEC 002A98EC*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x764);
/*802ACAF0 002A98F0*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*802ACAF4 002A98F4*/ PPC::Runtime::ASM::stwx(context->r3, context->r5, context->r0);
/*802ACAF8 002A98F8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802ACAFC 002A98FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802ACB00 002A9900*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r12));
/*802ACB04 002A9904*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACB08 002A9908*/ PPC::Runtime::ASM::bctrl();
/*802ACB0C 002A990C*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802ACB10 002A9910*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E33C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACB14 002A9914*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802ACB18 002A9918*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802ACB1C 002A991C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E33C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACB20 002A9920*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802ACB24 002A9924*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802ACB28 002A9928*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E33C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACB2C 002A992C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802ACB30 002A9930*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802ACB34 002A9934*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E33C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACB38 002A9938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACB3C 002A993C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x794);
/*802ACB40 002A9940*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACB44 002A9944*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACB48 002A9948*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802ACB4C 002A994C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACB50 002A9950*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACB54 002A9954*/ PPC::Runtime::ASM::fdivs(context->f0, context->f30, context->f0);
/*802ACB58 002A9958*/ PPC::Runtime::ASM::stfsx(context->f0, context->r3, context->r0);
/*802ACB5C 002A995C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACB60 002A9960*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACB64 002A9964*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x8);
/*802ACB68 002A9968*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*802ACB6C 002A996C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*802ACB70 002A9970*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*802ACB74 002A9974*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802ACB78 002A9978*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r12));
/*802ACB7C 002A997C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACB80 002A9980*/ PPC::Runtime::ASM::bctrl();
/*802ACB84 002A9984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACB88 002A9988*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x850);
/*802ACB8C 002A998C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802ACB90 002A9990*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802ACB94 002A9994*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802ACB98 002A9998*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r30);
/*802ACB9C 002A999C*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x854, context->r3));
/*802ACBA0 002A99A0*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x85c, context->r3));
/*802ACBA4 002A99A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACBA8 002A99A8*/ PPC::Runtime::ASM::stbx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_802ACBAC, 0x802ACBAC) //this is a jump label
/*802ACBAC 002A99AC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*802ACBB0 002A99B0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x2);
/*802ACBB4 002A99B4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x4);
/*802ACBB8 002A99B8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*802ACBBC 002A99BC*/ PPC::Runtime::ASM::blt(.L_802ACA64);
/*802ACBC0 002A99C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACBC4 002A99C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x700);
/*802ACBC8 002A99C8*/ PPC::Runtime::ASM::bl(fn_802CB234);
/*802ACBCC 002A99CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACBD0 002A99D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x514);
/*802ACBD4 002A99D4*/ PPC::Runtime::ASM::bl(fn_8037A94C);
/*802ACBD8 002A99D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*802ACBDC 002A99DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACBE0 002A99E0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*802ACBE4 002A99E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACBE8 002A99E8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802ACBEC 002A99EC*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACBF0 002A99F0*/ PPC::Runtime::ASM::slwi(context->r8, context->r0, 2);
/*802ACBF4 002A99F4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACBF8 002A99F8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r9, context->r8);
/*802ACBFC 002A99FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802ACC00 002A9A00*/ PPC::Runtime::ASM::stwx(context->r0, context->r9, context->r8);
/*802ACC04 002A9A04*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACC08 002A9A08*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACC0C 002A9A0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802ACC10 002A9A10*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802ACC14 002A9A14*/ PPC::Runtime::ASM::beq(.L_802ACD00);
/*802ACC18 002A9A18*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACC1C 002A9A1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACC20 002A9A20*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACC24 002A9A24*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACC28 002A9A28*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACC2C 002A9A2C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACC30 002A9A30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802ACC34 002A9A34*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802ACC38 002A9A38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r12));
/*802ACC3C 002A9A3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACC40 002A9A40*/ PPC::Runtime::ASM::bctrl();
/*802ACC44 002A9A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*802ACC48 002A9A48*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*802ACC4C 002A9A4C*/ PPC::Runtime::ASM::beq(.L_802ACD00);
/*802ACC50 002A9A50*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802ACC54 002A9A54*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*802ACC58 002A9A58*/ PPC::Runtime::ASM::b(.L_802ACC78);
RUNTIME_PPC_JUMP_LABEL(.L_802ACC5C, 0x802ACC5C) //this is a jump label
/*802ACC5C 002A9A5C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*802ACC60 002A9A60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*802ACC64 002A9A64*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802ACC68 002A9A68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*802ACC6C 002A9A6C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*802ACC70 002A9A70*/ PPC::Runtime::ASM::stwx(context->r0, context->r3, context->r4);
/*802ACC74 002A9A74*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_802ACC78, 0x802ACC78) //this is a jump label
/*802ACC78 002A9A78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*802ACC7C 002A9A7C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802ACC80 002A9A80*/ PPC::Runtime::ASM::cmplw(context->r5, context->r0);
/*802ACC84 002A9A84*/ PPC::Runtime::ASM::blt(.L_802ACC5C);
/*802ACC88 002A9A88*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACC8C 002A9A8C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACC90 002A9A90*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACC94 002A9A94*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACC98 002A9A98*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACC9C 002A9A9C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACCA0 002A9AA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802ACCA4 002A9AA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802ACCA8 002A9AA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r12));
/*802ACCAC 002A9AAC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACCB0 002A9AB0*/ PPC::Runtime::ASM::bctrl();
/*802ACCB4 002A9AB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*802ACCB8 002A9AB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*802ACCBC 002A9ABC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*802ACCC0 002A9AC0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802ACCC4 002A9AC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r28));
/*802ACCC8 002A9AC8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802ACCCC 002A9ACC*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*802ACCD0 002A9AD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802ACCD4 002A9AD4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*802ACCD8 002A9AD8*/ PPC::Runtime::ASM::bge(.L_802ACCE0);
/*802ACCDC 002A9ADC*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x88);
RUNTIME_PPC_JUMP_LABEL(.L_802ACCE0, 0x802ACCE0) //this is a jump label
/*802ACCE0 002A9AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802ACCE4 002A9AE4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802ACCE8 002A9AE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r28));
/*802ACCEC 002A9AEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*802ACCF0 002A9AF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*802ACCF4 002A9AF4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802ACCF8 002A9AF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802ACCFC 002A9AFC*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_802ACD00, 0x802ACD00) //this is a jump label
/*802ACD00 002A9B00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACD04 002A9B04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r3));
/*802ACD08 002A9B08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802ACD0C 002A9B0C*/ PPC::Runtime::ASM::beq(.L_802ACD6C);
/*802ACD10 002A9B10*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*802ACD14 002A9B14*/ PPC::Runtime::ASM::mr(context->r27, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_802ACD18, 0x802ACD18) //this is a jump label
/*802ACD18 002A9B18*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACD1C 002A9B1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACD20 002A9B20*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FE8 @ Get_MemoryOffset_SDA21);
/*802ACD24 002A9B24*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FE0 @ Get_MemoryOffset_SDA21);
/*802ACD28 002A9B28*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACD2C 002A9B2C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACD30 002A9B30*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x8);
/*802ACD34 002A9B34*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*802ACD38 002A9B38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802ACD3C 002A9B3C*/ PPC::Runtime::ASM::beq(.L_802ACD50);
/*802ACD40 002A9B40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACD44 002A9B44*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0xa08);
/*802ACD48 002A9B48*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*802ACD4C 002A9B4C*/ PPC::Runtime::ASM::bl(fn_802B88F4);
RUNTIME_PPC_JUMP_LABEL(.L_802ACD50, 0x802ACD50) //this is a jump label
/*802ACD50 002A9B50*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*802ACD54 002A9B54*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*802ACD58 002A9B58*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x4);
/*802ACD5C 002A9B5C*/ PPC::Runtime::ASM::blt(.L_802ACD18);
/*802ACD60 002A9B60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACD64 002A9B64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa04, context->r3));
/*802ACD68 002A9B68*/ PPC::Runtime::ASM::bl(fn_802B7DAC);
RUNTIME_PPC_JUMP_LABEL(.L_802ACD6C, 0x802ACD6C) //this is a jump label
/*802ACD6C 002A9B6C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*802ACD70 002A9B70*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*802ACD74 002A9B74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802ACD78 002A9B78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 20, 20);
/*802ACD7C 002A9B7C*/ PPC::Runtime::ASM::beq(.L_802ACDB0);
/*802ACD80 002A9B80*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACD84 002A9B84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACD88 002A9B88*/ PPC::Runtime::ASM::li(context->r5, lbl_805D80C8 @ Get_MemoryOffset_SDA21);
/*802ACD8C 002A9B8C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D80C0 @ Get_MemoryOffset_SDA21);
/*802ACD90 002A9B90*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802ACD94 002A9B94*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802ACD98 002A9B98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E33C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802ACD9C 002A9B9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802ACDA0 002A9BA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802ACDA4 002A9BA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802ACDA8 002A9BA8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*802ACDAC 002A9BAC*/ PPC::Runtime::ASM::bl(fn_80384EA4);
RUNTIME_PPC_JUMP_LABEL(.L_802ACDB0, 0x802ACDB0) //this is a jump label
/*802ACDB0 002A9BB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACDB4 002A9BB4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x6d0);
/*802ACDB8 002A9BB8*/ PPC::Runtime::ASM::bl(fn_80394CD4);
/*802ACDBC 002A9BBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802ACDC0 002A9BC0*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x6);
/*802ACDC4 002A9BC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x22f0, context->r3));
/*802ACDC8 002A9BC8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802ACDCC 002A9BCC*/ PPC::Runtime::ASM::beq(.L_802ACDEC);
/*802ACDD0 002A9BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802ACDD4 002A9BD4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802ACDD8 002A9BD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802ACDDC 002A9BDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802ACDE0 002A9BE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802ACDE4 002A9BE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802ACDE8 002A9BE8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802ACDEC, 0x802ACDEC) //this is a jump label
/*802ACDEC 002A9BEC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802ACDF0 002A9BF0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802ACDF4 002A9BF4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802ACDF8 002A9BF8*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802ACDFC 002A9BFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*802ACE00 002A9C00*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802ACE04 002A9C04*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802ACE08 002A9C08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802ACE0C 002A9C0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802ACE10 002A9C10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*802ACE14 002A9C14*/ PPC::Runtime::ASM::blr();
}