//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80252A60.hpp"
#include "fn_80252970.hpp"



void fn_80252824(PPC::Runtime::GCContext* context)
{
/*80252824 0024F624*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80252828 0024F628*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025282C 0024F62C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80252830 0024F630*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80252834 0024F634*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80252838 0024F638*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025283C 0024F63C*/ PPC::Runtime::ASM::lis(context->r4, String_ "ItemPartsModelNumOve" Get_MemoryOffset_HighBit);
/*80252840 0024F640*/ PPC::Runtime::ASM::addi(context->r27, context->r4, String_ "ItemPartsModelNumOve" Get_MemoryOffset_LowBit);
/*80252844 0024F644*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80252848 0024F648*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8025284C 0024F64C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B6380 @ Get_MemoryOffset_HighBit);
/*80252850 0024F650*/ PPC::Runtime::ASM::addi(context->r28, context->r3, lbl_804B6380 @ Get_MemoryOffset_LowBit);
/*80252854 0024F654*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80252858 0024F658*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8025285C 0024F65C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80252860 0024F660*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x8);
/*80252864 0024F664*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80252868, 0x80252868) //this is a jump label
/*80252868 0024F668*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8025286C 0024F66C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*80252870 0024F670*/ PPC::Runtime::ASM::ble(.L_80252890);
/*80252874 0024F674*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80252878 0024F678*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8025287C 0024F67C*/ PPC::Runtime::ASM::bl(OSReport);
/*80252880 0024F680*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80252884 0024F684*/ PPC::Runtime::ASM::li(context->r4, 0x90);
/*80252888 0024F688*/ PPC::Runtime::ASM::li(context->r5, lbl_805D73A8 @ Get_MemoryOffset_SDA21);
/*8025288C 0024F68C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80252890, 0x80252890) //this is a jump label
/*80252890 0024F690*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x150);
/*80252894 0024F694*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80252898 0024F698*/ PPC::Runtime::ASM::stbx(context->r29, context->r31, context->r0);
/*8025289C 0024F69C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14c);
/*802528A0 0024F6A0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x98);
/*802528A4 0024F6A4*/ PPC::Runtime::ASM::bl(fn_80252A60);
/*802528A8 0024F6A8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*802528AC 0024F6AC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x4);
/*802528B0 0024F6B0*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x3);
/*802528B4 0024F6B4*/ PPC::Runtime::ASM::blt(.L_80252868);
/*802528B8 0024F6B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r31));
/*802528BC 0024F6BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802528C0 0024F6C0*/ PPC::Runtime::ASM::beq(.L_80252958);
/*802528C4 0024F6C4*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*802528C8 0024F6C8*/ PPC::Runtime::ASM::li(context->r5, -0x2);
/*802528CC 0024F6CC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802528D0 0024F6D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802528D4 0024F6D4*/ PPC::Runtime::ASM::b(.L_802528E8);
RUNTIME_PPC_JUMP_LABEL(.L_802528D8, 0x802528D8) //this is a jump label
/*802528D8 0024F6D8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x155, context->r6));
/*802528DC 0024F6DC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*802528E0 0024F6E0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r6));
/*802528E4 0024F6E4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_802528E8, 0x802528E8) //this is a jump label
/*802528E8 0024F6E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r31));
/*802528EC 0024F6EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802528F0 0024F6F0*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*802528F4 0024F6F4*/ PPC::Runtime::ASM::blt(.L_802528D8);
/*802528F8 0024F6F8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802528FC 0024F6FC*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*80252900 0024F700*/ PPC::Runtime::ASM::b(.L_80252914);
RUNTIME_PPC_JUMP_LABEL(.L_80252904, 0x80252904) //this is a jump label
/*80252904 0024F704*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x155, context->r6));
/*80252908 0024F708*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8025290C 0024F70C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r6));
/*80252910 0024F710*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80252914, 0x80252914) //this is a jump label
/*80252914 0024F714*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r31));
/*80252918 0024F718*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8025291C 0024F71C*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*80252920 0024F720*/ PPC::Runtime::ASM::blt(.L_80252904);
/*80252924 0024F724*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80252928 0024F728*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8025292C 0024F72C*/ PPC::Runtime::ASM::b(.L_80252940);
RUNTIME_PPC_JUMP_LABEL(.L_80252930, 0x80252930) //this is a jump label
/*80252930 0024F730*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x155, context->r6));
/*80252934 0024F734*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80252938 0024F738*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r6));
/*8025293C 0024F73C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80252940, 0x80252940) //this is a jump label
/*80252940 0024F740*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r31));
/*80252944 0024F744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80252948 0024F748*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8025294C 0024F74C*/ PPC::Runtime::ASM::blt(.L_80252930);
/*80252950 0024F750*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80252954 0024F754*/ PPC::Runtime::ASM::bl(fn_80252970);
RUNTIME_PPC_JUMP_LABEL(.L_80252958, 0x80252958) //this is a jump label
/*80252958 0024F758*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8025295C 0024F75C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80252960 0024F760*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80252964 0024F764*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80252968 0024F768*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8025296C 0024F76C*/ PPC::Runtime::ASM::blr();
}