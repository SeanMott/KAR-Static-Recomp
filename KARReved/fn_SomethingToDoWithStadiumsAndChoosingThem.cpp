//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000FCB0.hpp"
#include "fn_8000BA20.hpp"
#include "fn_8000C148.hpp"
#include "fn_8000C17C.hpp"



void fn_SomethingToDoWithStadiumsAndChoosingThem(PPC::Runtime::GCContext* context)
{
/*8003F808 0003C608*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xf0, context->r1));
/*8003F80C 0003C60C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003F810 0003C610*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8003F814 0003C614*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xf0);
/*8003F818 0003C618*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*8003F81C 0003C61C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F820 0003C620*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8003F824 0003C624*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F828 0003C628*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003F82C 0003C62C*/ PPC::Runtime::ASM::bl(fn_8000FCB0);
/*8003F830 0003C630*/ PPC::Runtime::ASM::addi(context->r27, context->r1, 0x8);
/*8003F834 0003C634*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8003F838 0003C638*/ PPC::Runtime::ASM::mr(context->r29, context->r27);
/*8003F83C 0003C63C*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8003F840 0003C640*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8003F844 0003C644*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8003F848, 0x8003F848) //this is a jump label
/*8003F848 0003C648*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x396, context->r30));
/*8003F84C 0003C64C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8003F850 0003C650*/ PPC::Runtime::ASM::beq(.L_8003F878);
/*8003F854 0003C654*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*8003F858 0003C658*/ PPC::Runtime::ASM::bl(fn_8000BA20);
/*8003F85C 0003C65C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x396, context->r30));
/*8003F860 0003C660*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8003F864 0003C664*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8003F868 0003C668*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003F86C 0003C66C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8003F870 0003C670*/ PPC::Runtime::ASM::bne(.L_8003F8F4);
/*8003F874 0003C674*/ PPC::Runtime::ASM::b(.L_8003F8B8);
RUNTIME_PPC_JUMP_LABEL(.L_8003F878, 0x8003F878) //this is a jump label
/*8003F878 0003C678*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45e, context->r30));
/*8003F87C 0003C67C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003F880 0003C680*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*8003F884 0003C684*/ PPC::Runtime::ASM::beq(.L_8003F8F4);
/*8003F888 0003C688*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45f, context->r30));
/*8003F88C 0003C68C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003F890 0003C690*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*8003F894 0003C694*/ PPC::Runtime::ASM::beq(.L_8003F8F4);
/*8003F898 0003C698*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r30));
/*8003F89C 0003C69C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003F8A0 0003C6A0*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*8003F8A4 0003C6A4*/ PPC::Runtime::ASM::beq(.L_8003F8F4);
/*8003F8A8 0003C6A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x461, context->r30));
/*8003F8AC 0003C6AC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003F8B0 0003C6B0*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*8003F8B4 0003C6B4*/ PPC::Runtime::ASM::beq(.L_8003F8F4);
RUNTIME_PPC_JUMP_LABEL(.L_8003F8B8, 0x8003F8B8) //this is a jump label
/*8003F8B8 0003C6B8*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*8003F8BC 0003C6BC*/ PPC::Runtime::ASM::bl(fn_8000C148);
/*8003F8C0 0003C6C0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8003F8C4 0003C6C4*/ PPC::Runtime::ASM::bne(.L_8003F8D8);
/*8003F8C8 0003C6C8*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*8003F8CC 0003C6CC*/ PPC::Runtime::ASM::bl(fn_8000C17C);
/*8003F8D0 0003C6D0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8003F8D4 0003C6D4*/ PPC::Runtime::ASM::beq(.L_8003F8F4);
RUNTIME_PPC_JUMP_LABEL(.L_8003F8D8, 0x8003F8D8) //this is a jump label
/*8003F8D8 0003C6D8*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8003F8DC 0003C6DC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*8003F8E0 0003C6E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8003F8E4 0003C6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8003F8E8 0003C6E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8003F8EC 0003C6EC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*8003F8F0 0003C6F0*/ PPC::Runtime::ASM::add(context->r24, context->r24, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8003F8F4, 0x8003F8F4) //this is a jump label
/*8003F8F4 0003C6F4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*8003F8F8 0003C6F8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*8003F8FC 0003C6FC*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x18);
/*8003F900 0003C700*/ PPC::Runtime::ASM::blt(.L_8003F848);
/*8003F904 0003C704*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*8003F908 0003C708*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8003F90C 0003C70C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8003F910 0003C710*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8003F914 0003C714*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8003F918 0003C718*/ PPC::Runtime::ASM::mtctr(context->r25);
/*8003F91C 0003C71C*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*8003F920 0003C720*/ PPC::Runtime::ASM::ble(.L_8003F950);
RUNTIME_PPC_JUMP_LABEL(.L_8003F924, 0x8003F924) //this is a jump label
/*8003F924 0003C724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8003F928 0003C728*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r0);
/*8003F92C 0003C72C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r6);
/*8003F930 0003C730*/ PPC::Runtime::ASM::bge(.L_8003F944);
/*8003F934 0003C734*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*8003F938 0003C738*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8003F93C 0003C73C*/ PPC::Runtime::ASM::lwzx(context->r5, context->r3, context->r0);
/*8003F940 0003C740*/ PPC::Runtime::ASM::b(.L_8003F950);
RUNTIME_PPC_JUMP_LABEL(.L_8003F944, 0x8003F944) //this is a jump label
/*8003F944 0003C744*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x8);
/*8003F948 0003C748*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8003F94C 0003C74C*/ PPC::Runtime::ASM::bdnz(.L_8003F924);
RUNTIME_PPC_JUMP_LABEL(.L_8003F950, 0x8003F950) //this is a jump label
/*8003F950 0003C750*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r30));
/*8003F954 0003C754*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xf0);
/*8003F958 0003C758*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x461, context->r30));
/*8003F95C 0003C75C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45f, context->r30));
/*8003F960 0003C760*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r30));
/*8003F964 0003C764*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45e, context->r30));
/*8003F968 0003C768*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45f, context->r30));
/*8003F96C 0003C76C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45e, context->r30));
/*8003F970 0003C770*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r31));
/*8003F974 0003C774*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*8003F978 0003C778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8003F97C 0003C77C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003F980 0003C780*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xf0);
/*8003F984 0003C784*/ PPC::Runtime::ASM::blr();
}