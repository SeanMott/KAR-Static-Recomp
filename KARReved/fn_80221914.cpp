//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80221914(PPC::Runtime::GCContext* context)
{
/*80221914 0021E714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80221918 0021E718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022191C 0021E71C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80221920 0021E720*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80221924 0021E724*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80221928 0021E728*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8022192C 0021E72C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4450 @ Get_MemoryOffset_HighBit);
/*80221930 0021E730*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80221934 0021E734*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804B4450 @ Get_MemoryOffset_LowBit);
/*80221938 0021E738*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8022193C 0021E73C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80221940 0021E740*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa);
/*80221944 0021E744*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80221948 0021E748*/ PPC::Runtime::ASM::ble(.L_8022196C);
/*8022194C 0021E74C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80221950 0021E750*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80221954 0021E754*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80221958 0021E758*/ PPC::Runtime::ASM::bl(OSReport);
/*8022195C 0021E75C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*80221960 0021E760*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*80221964 0021E764*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71C0 @ Get_MemoryOffset_SDA21);
/*80221968 0021E768*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022196C, 0x8022196C) //this is a jump label
/*8022196C 0021E76C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80221970 0021E770*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_80221974, 0x80221974) //this is a jump label
/*80221974 0021E774*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r27));
/*80221978 0021E778*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8022197C 0021E77C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80221980 0021E780*/ PPC::Runtime::ASM::stwx(context->r29, context->r4, context->r30);
/*80221984 0021E784*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80221988 0021E788*/ PPC::Runtime::ASM::bl(fn_HSD_JObjGetFlags);
/*8022198C 0021E78C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 19, 19);
/*80221990 0021E790*/ PPC::Runtime::ASM::bne(.L_802219C8);
/*80221994 0021E794*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80221998 0021E798*/ PPC::Runtime::ASM::bne(.L_802219A4);
/*8022199C 0021E79C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802219A0 0021E7A0*/ PPC::Runtime::ASM::b(.L_802219A8);
RUNTIME_PPC_JUMP_LABEL(.L_802219A4, 0x802219A4) //this is a jump label
/*802219A4 0021E7A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802219A8, 0x802219A8) //this is a jump label
/*802219A8 0021E7A8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802219AC 0021E7AC*/ PPC::Runtime::ASM::beq(.L_802219C8);
/*802219B0 0021E7B0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802219B4 0021E7B4*/ PPC::Runtime::ASM::bne(.L_802219C0);
/*802219B8 0021E7B8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*802219BC 0021E7BC*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_802219C0, 0x802219C0) //this is a jump label
/*802219C0 0021E7C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802219C4 0021E7C4*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_802219C8, 0x802219C8) //this is a jump label
/*802219C8 0021E7C8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802219CC 0021E7CC*/ PPC::Runtime::ASM::bne(.L_802219D8);
/*802219D0 0021E7D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802219D4 0021E7D4*/ PPC::Runtime::ASM::b(.L_802219DC);
RUNTIME_PPC_JUMP_LABEL(.L_802219D8, 0x802219D8) //this is a jump label
/*802219D8 0021E7D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802219DC, 0x802219DC) //this is a jump label
/*802219DC 0021E7DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802219E0 0021E7E0*/ PPC::Runtime::ASM::beq(.L_802219FC);
/*802219E4 0021E7E4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802219E8 0021E7E8*/ PPC::Runtime::ASM::bne(.L_802219F4);
/*802219EC 0021E7EC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*802219F0 0021E7F0*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_802219F4, 0x802219F4) //this is a jump label
/*802219F4 0021E7F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802219F8 0021E7F8*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_802219FC, 0x802219FC) //this is a jump label
/*802219FC 0021E7FC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80221A00 0021E800*/ PPC::Runtime::ASM::bne(.L_80221A0C);
/*80221A04 0021E804*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80221A08 0021E808*/ PPC::Runtime::ASM::b(.L_80221A10);
RUNTIME_PPC_JUMP_LABEL(.L_80221A0C, 0x80221A0C) //this is a jump label
/*80221A0C 0021E80C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80221A10, 0x80221A10) //this is a jump label
/*80221A10 0021E810*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80221A14 0021E814*/ PPC::Runtime::ASM::bne(.L_80221A20);
/*80221A18 0021E818*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80221A1C 0021E81C*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_80221A20, 0x80221A20) //this is a jump label
/*80221A20 0021E820*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80221A24 0021E824*/ PPC::Runtime::ASM::bne(.L_80221A30);
/*80221A28 0021E828*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80221A2C 0021E82C*/ PPC::Runtime::ASM::b(.L_80221A34);
RUNTIME_PPC_JUMP_LABEL(.L_80221A30, 0x80221A30) //this is a jump label
/*80221A30 0021E830*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80221A34, 0x80221A34) //this is a jump label
/*80221A34 0021E834*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80221A38 0021E838*/ PPC::Runtime::ASM::bne(.L_80221A44);
/*80221A3C 0021E83C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80221A40 0021E840*/ PPC::Runtime::ASM::b(.L_80221A48);
RUNTIME_PPC_JUMP_LABEL(.L_80221A44, 0x80221A44) //this is a jump label
/*80221A44 0021E844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80221A48, 0x80221A48) //this is a jump label
/*80221A48 0021E848*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80221A4C 0021E84C*/ PPC::Runtime::ASM::beq(.L_80221A7C);
/*80221A50 0021E850*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80221A54 0021E854*/ PPC::Runtime::ASM::bne(.L_80221A60);
/*80221A58 0021E858*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80221A5C 0021E85C*/ PPC::Runtime::ASM::b(.L_80221A64);
RUNTIME_PPC_JUMP_LABEL(.L_80221A60, 0x80221A60) //this is a jump label
/*80221A60 0021E860*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80221A64, 0x80221A64) //this is a jump label
/*80221A64 0021E864*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80221A68 0021E868*/ PPC::Runtime::ASM::bne(.L_80221A74);
/*80221A6C 0021E86C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80221A70 0021E870*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_80221A74, 0x80221A74) //this is a jump label
/*80221A74 0021E874*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80221A78 0021E878*/ PPC::Runtime::ASM::b(.L_80221A94);
RUNTIME_PPC_JUMP_LABEL(.L_80221A7C, 0x80221A7C) //this is a jump label
/*80221A7C 0021E87C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80221A80 0021E880*/ PPC::Runtime::ASM::bne(.L_80221A8C);
/*80221A84 0021E884*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80221A88 0021E888*/ PPC::Runtime::ASM::b(.L_802219FC);
RUNTIME_PPC_JUMP_LABEL(.L_80221A8C, 0x80221A8C) //this is a jump label
/*80221A8C 0021E88C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80221A90 0021E890*/ PPC::Runtime::ASM::b(.L_802219FC);
RUNTIME_PPC_JUMP_LABEL(.L_80221A94, 0x80221A94) //this is a jump label
/*80221A94 0021E894*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80221A98 0021E898*/ PPC::Runtime::ASM::bne(.L_80221974);
/*80221A9C 0021E89C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80221AA0 0021E8A0*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*80221AA4 0021E8A4*/ PPC::Runtime::ASM::beq(.L_80221AC8);
/*80221AA8 0021E8A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80221AAC 0021E8AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x28);
/*80221AB0 0021E8B0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80221AB4 0021E8B4*/ PPC::Runtime::ASM::bl(OSReport);
/*80221AB8 0021E8B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*80221ABC 0021E8BC*/ PPC::Runtime::ASM::li(context->r4, 0x45);
/*80221AC0 0021E8C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71C0 @ Get_MemoryOffset_SDA21);
/*80221AC4 0021E8C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80221AC8, 0x80221AC8) //this is a jump label
/*80221AC8 0021E8C8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80221ACC 0021E8CC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80221AD0 0021E8D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80221AD4 0021E8D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80221AD8 0021E8D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80221ADC 0021E8DC*/ PPC::Runtime::ASM::blr();
}