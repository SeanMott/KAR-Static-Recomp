//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801696AC.hpp"
#include "fn_8016AE94.hpp"
#include "fn_80169E18.hpp"
#include "fn_8014157C.hpp"
#include "fn_80146A40.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801696AC.hpp"
#include "fn_8016AE94.hpp"
#include "fn_80169E18.hpp"
#include "fn_8014157C.hpp"
#include "fn_80146A40.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8016AE4C.hpp"
#include "fn_80169DD0.hpp"
#include "fn_80140AEC.hpp"
#include "fn_80140F78.hpp"
#include "fn_801415E8.hpp"
#include "fn_80140AEC.hpp"
#include "fn_80140F78.hpp"
#include "fn_8016AE4C.hpp"
#include "fn_80169DD0.hpp"
#include "fn_801415E8.hpp"
#include "fn_8016AE94.hpp"
#include "fn_80169E18.hpp"
#include "fn_80168D7C.hpp"



void fn_80167FD0(PPC::Runtime::GCContext* context)
{
/*80167FD0 00164DD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80167FD4 00164DD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80167FD8 00164DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80167FDC 00164DDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80167FE0 00164DE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80167FE4 00164DE4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80167FE8 00164DE8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80167FEC 00164DEC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80167FF0 00164DF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80167FF4 00164DF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80167FF8 00164DF8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd, context->r30));
/*80167FFC 00164DFC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80168000 00164E00*/ PPC::Runtime::ASM::ble(.L_80168184);
/*80168004 00164E04*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80168008 00164E08*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd, context->r30));
/*8016800C 00164E0C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd, context->r30));
/*80168010 00164E10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*80168014 00164E14*/ PPC::Runtime::ASM::bne(.L_801680CC);
/*80168018 00164E18*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016801C 00164E1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r3));
/*80168020 00164E20*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80168024 00164E24*/ PPC::Runtime::ASM::beq(.L_80168184);
/*80168028 00164E28*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016802C 00164E2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x67, context->r28));
/*80168030 00164E30*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80168034 00164E34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80168038 00164E38*/ PPC::Runtime::ASM::beq(.L_801680B8);
/*8016803C 00164E3C*/ PPC::Runtime::ASM::bge(.L_80168184);
/*80168040 00164E40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80168044 00164E44*/ PPC::Runtime::ASM::bge(.L_8016804C);
/*80168048 00164E48*/ PPC::Runtime::ASM::b(.L_80168184);
RUNTIME_PPC_JUMP_LABEL(.L_8016804C, 0x8016804C) //this is a jump label
/*8016804C 00164E4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168050 00164E50*/ PPC::Runtime::ASM::li(context->r0, 0x50);
/*80168054 00164E54*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r28));
/*80168058 00164E58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016805C 00164E5C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r28));
/*80168060 00164E60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*80168064 00164E64*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*80168068 00164E68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8016806C 00164E6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80168070 00164E70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80168074 00164E74*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80168078 00164E78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8016807C 00164E7C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*80168080 00164E80*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80168084 00164E84*/ PPC::Runtime::ASM::bl(fn_801696AC);
/*80168088 00164E88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016808C 00164E8C*/ PPC::Runtime::ASM::bl(fn_8016AE94);
/*80168090 00164E90*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80168094 00164E94*/ PPC::Runtime::ASM::bl(fn_80169E18);
/*80168098 00164E98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016809C 00164E9C*/ PPC::Runtime::ASM::bl(fn_8014157C);
/*801680A0 00164EA0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801680A4 00164EA4*/ PPC::Runtime::ASM::bl(fn_80146A40);
/*801680A8 00164EA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*801680AC 00164EAC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801680B0 00164EB0*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*801680B4 00164EB4*/ PPC::Runtime::ASM::b(.L_80168184);
RUNTIME_PPC_JUMP_LABEL(.L_801680B8, 0x801680B8) //this is a jump label
/*801680B8 00164EB8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801680BC 00164EBC*/ PPC::Runtime::ASM::li(context->r0, 0x11);
/*801680C0 00164EC0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r28));
/*801680C4 00164EC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r28));
/*801680C8 00164EC8*/ PPC::Runtime::ASM::b(.L_80168184);
RUNTIME_PPC_JUMP_LABEL(.L_801680CC, 0x801680CC) //this is a jump label
/*801680CC 00164ECC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801680D0 00164ED0*/ PPC::Runtime::ASM::bgt(.L_80168184);
/*801680D4 00164ED4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801680D8 00164ED8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r3));
/*801680DC 00164EDC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801680E0 00164EE0*/ PPC::Runtime::ASM::beq(.L_80168184);
/*801680E4 00164EE4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801680E8 00164EE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc7, context->r28));
/*801680EC 00164EEC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801680F0 00164EF0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801680F4 00164EF4*/ PPC::Runtime::ASM::beq(.L_80168174);
/*801680F8 00164EF8*/ PPC::Runtime::ASM::bge(.L_80168184);
/*801680FC 00164EFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80168100 00164F00*/ PPC::Runtime::ASM::bge(.L_80168108);
/*80168104 00164F04*/ PPC::Runtime::ASM::b(.L_80168184);
RUNTIME_PPC_JUMP_LABEL(.L_80168108, 0x80168108) //this is a jump label
/*80168108 00164F08*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016810C 00164F0C*/ PPC::Runtime::ASM::li(context->r0, 0x50);
/*80168110 00164F10*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5, context->r28));
/*80168114 00164F14*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80168118 00164F18*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r28));
/*8016811C 00164F1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*80168120 00164F20*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*80168124 00164F24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*80168128 00164F28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016812C 00164F2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80168130 00164F30*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80168134 00164F34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*80168138 00164F38*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016813C 00164F3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168140 00164F40*/ PPC::Runtime::ASM::bl(fn_801696AC);
/*80168144 00164F44*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168148 00164F48*/ PPC::Runtime::ASM::bl(fn_8016AE94);
/*8016814C 00164F4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168150 00164F50*/ PPC::Runtime::ASM::bl(fn_80169E18);
/*80168154 00164F54*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168158 00164F58*/ PPC::Runtime::ASM::bl(fn_8014157C);
/*8016815C 00164F5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168160 00164F60*/ PPC::Runtime::ASM::bl(fn_80146A40);
/*80168164 00164F64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*80168168 00164F68*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016816C 00164F6C*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80168170 00164F70*/ PPC::Runtime::ASM::b(.L_80168184);
RUNTIME_PPC_JUMP_LABEL(.L_80168174, 0x80168174) //this is a jump label
/*80168174 00164F74*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80168178 00164F78*/ PPC::Runtime::ASM::li(context->r0, 0x11);
/*8016817C 00164F7C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5, context->r28));
/*80168180 00164F80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc6, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80168184, 0x80168184) //this is a jump label
/*80168184 00164F84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80168188 00164F88*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8016818C 00164F8C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80168190 00164F90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80168194, 0x80168194) //this is a jump label
/*80168194 00164F94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80168198 00164F98*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x34);
/*8016819C 00164F9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801681A0 00164FA0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801681A4 00164FA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*801681A8 00164FA8*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x40);
/*801681AC 00164FAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801681B0 00164FB0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801681B4 00164FB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*801681B8 00164FB8*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x4c);
/*801681BC 00164FBC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801681C0 00164FC0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801681C4 00164FC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*801681C8 00164FC8*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x28);
/*801681CC 00164FCC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801681D0 00164FD0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801681D4 00164FD4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*801681D8 00164FD8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x60);
/*801681DC 00164FDC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x2);
/*801681E0 00164FE0*/ PPC::Runtime::ASM::blt(.L_80168194);
/*801681E4 00164FE4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801681E8 00164FE8*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_801681EC, 0x801681EC) //this is a jump label
/*801681EC 00164FEC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x67, context->r31));
/*801681F0 00164FF0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801681F4 00164FF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801681F8 00164FF8*/ PPC::Runtime::ASM::beq(.L_80168404);
/*801681FC 00164FFC*/ PPC::Runtime::ASM::bge(.L_80168448);
/*80168200 00165000*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80168204 00165004*/ PPC::Runtime::ASM::bge(.L_8016820C);
/*80168208 00165008*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_8016820C, 0x8016820C) //this is a jump label
/*8016820C 0016500C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*80168210 00165010*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80168214 00165014*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80168218 00165018*/ PPC::Runtime::ASM::beq(.L_80168318);
/*8016821C 0016501C*/ PPC::Runtime::ASM::bge(.L_80168230);
/*80168220 00165020*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80168224 00165024*/ PPC::Runtime::ASM::beq(.L_80168448);
/*80168228 00165028*/ PPC::Runtime::ASM::bge(.L_8016823C);
/*8016822C 0016502C*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_80168230, 0x80168230) //this is a jump label
/*80168230 00165030*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80168234 00165034*/ PPC::Runtime::ASM::bge(.L_80168448);
/*80168238 00165038*/ PPC::Runtime::ASM::b(.L_801683C0);
RUNTIME_PPC_JUMP_LABEL(.L_8016823C, 0x8016823C) //this is a jump label
/*8016823C 0016503C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80168240 00165040*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80168244 00165044*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80168248 00165048*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*8016824C 0016504C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80168250 00165050*/ PPC::Runtime::ASM::bgt(.L_80168260);
/*80168254 00165054*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80168258 00165058*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*8016825C 0016505C*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_80168260, 0x80168260) //this is a jump label
/*80168260 00165060*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80168264 00165064*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1e);
/*80168268 00165068*/ PPC::Runtime::ASM::bne(.L_80168278);
/*8016826C 0016506C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80168270 00165070*/ PPC::Runtime::ASM::bl(fn_8016AE4C);
/*80168274 00165074*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_80168278, 0x80168278) //this is a jump label
/*80168278 00165078*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x14);
/*8016827C 0016507C*/ PPC::Runtime::ASM::bne(.L_8016829C);
/*80168280 00165080*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80168284 00165084*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80168288 00165088*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016828C 0016508C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80168290 00165090*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80168294 00165094*/ PPC::Runtime::ASM::bl(fn_80169DD0);
/*80168298 00165098*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_8016829C, 0x8016829C) //this is a jump label
/*8016829C 0016509C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x23);
/*801682A0 001650A0*/ PPC::Runtime::ASM::bne(.L_801682E8);
/*801682A4 001650A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r30));
/*801682A8 001650A8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801682AC 001650AC*/ PPC::Runtime::ASM::bne(.L_801682D0);
/*801682B0 001650B0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801682B4 001650B4*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*801682B8 001650B8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59, context->r31));
/*801682BC 001650BC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*801682C0 001650C0*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a, context->r31));
/*801682C4 001650C4*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801682C8 001650C8*/ PPC::Runtime::ASM::bl(fn_80140AEC);
/*801682CC 001650CC*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_801682D0, 0x801682D0) //this is a jump label
/*801682D0 001650D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*801682D4 001650D4*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*801682D8 001650D8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801682DC 001650DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*801682E0 001650E0*/ PPC::Runtime::ASM::bl(fn_80140F78);
/*801682E4 001650E4*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_801682E8, 0x801682E8) //this is a jump label
/*801682E8 001650E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*801682EC 001650EC*/ PPC::Runtime::ASM::bne(.L_80168448);
/*801682F0 001650F0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*801682F4 001650F4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r5);
/*801682F8 001650F8*/ PPC::Runtime::ASM::ble(.L_80168448);
/*801682FC 001650FC*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80168300 00165100*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*80168304 00165104*/ PPC::Runtime::ASM::bl(fn_801415E8);
/*80168308 00165108*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016830C 0016510C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80168310 00165110*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80168314 00165114*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_80168318, 0x80168318) //this is a jump label
/*80168318 00165118*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*8016831C 0016511C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80168320 00165120*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80168324 00165124*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80168328 00165128*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016832C 0016512C*/ PPC::Runtime::ASM::bgt(.L_80168448);
/*80168330 00165130*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80168334 00165134*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*80168338 00165138*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r30));
/*8016833C 0016513C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80168340 00165140*/ PPC::Runtime::ASM::bne(.L_80168364);
/*80168344 00165144*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80168348 00165148*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016834C 0016514C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59, context->r31));
/*80168350 00165150*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*80168354 00165154*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a, context->r31));
/*80168358 00165158*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8016835C 0016515C*/ PPC::Runtime::ASM::bl(fn_80140AEC);
/*80168360 00165160*/ PPC::Runtime::ASM::b(.L_80168378);
RUNTIME_PPC_JUMP_LABEL(.L_80168364, 0x80168364) //this is a jump label
/*80168364 00165164*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80168368 00165168*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016836C 0016516C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*80168370 00165170*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*80168374 00165174*/ PPC::Runtime::ASM::bl(fn_80140F78);
RUNTIME_PPC_JUMP_LABEL(.L_80168378, 0x80168378) //this is a jump label
/*80168378 00165178*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016837C 0016517C*/ PPC::Runtime::ASM::bl(fn_8016AE4C);
/*80168380 00165180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80168384 00165184*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80168388 00165188*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016838C 0016518C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80168390 00165190*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80168394 00165194*/ PPC::Runtime::ASM::bl(fn_80169DD0);
/*80168398 00165198*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8016839C 0016519C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r5);
/*801683A0 001651A0*/ PPC::Runtime::ASM::ble(.L_80168448);
/*801683A4 001651A4*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*801683A8 001651A8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*801683AC 001651AC*/ PPC::Runtime::ASM::bl(fn_801415E8);
/*801683B0 001651B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801683B4 001651B4*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801683B8 001651B8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*801683BC 001651BC*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_801683C0, 0x801683C0) //this is a jump label
/*801683C0 001651C0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*801683C4 001651C4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801683C8 001651C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*801683CC 001651CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*801683D0 001651D0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801683D4 001651D4*/ PPC::Runtime::ASM::bgt(.L_80168448);
/*801683D8 001651D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801683DC 001651DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801683E0 001651E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*801683E4 001651E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801683E8 001651E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801683EC 001651EC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801683F0 001651F0*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*801683F4 001651F4*/ PPC::Runtime::ASM::bl(fn_8016AE94);
/*801683F8 001651F8*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*801683FC 001651FC*/ PPC::Runtime::ASM::bl(fn_80169E18);
/*80168400 00165200*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_80168404, 0x80168404) //this is a jump label
/*80168404 00165204*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*80168408 00165208*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016840C 0016520C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80168410 00165210*/ PPC::Runtime::ASM::beq(.L_80168420);
/*80168414 00165214*/ PPC::Runtime::ASM::bge(.L_80168448);
/*80168418 00165218*/ PPC::Runtime::ASM::b(.L_80168448);
/*8016841C 0016521C*/ PPC::Runtime::ASM::b(.L_80168448);
RUNTIME_PPC_JUMP_LABEL(.L_80168420, 0x80168420) //this is a jump label
/*80168420 00165220*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80168424 00165224*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80168428 00165228*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*8016842C 0016522C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80168430 00165230*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80168434 00165234*/ PPC::Runtime::ASM::bgt(.L_80168448);
/*80168438 00165238*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016843C 0016523C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80168440 00165240*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x65, context->r31));
/*80168444 00165244*/ PPC::Runtime::ASM::bl(fn_80168D7C);
RUNTIME_PPC_JUMP_LABEL(.L_80168448, 0x80168448) //this is a jump label
/*80168448 00165248*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016844C 0016524C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x60);
/*80168450 00165250*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*80168454 00165254*/ PPC::Runtime::ASM::blt(.L_801681EC);
/*80168458 00165258*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016845C 0016525C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80168460 00165260*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80168464 00165264*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80168468 00165268*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016846C 0016526C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80168470 00165270*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80168474 00165274*/ PPC::Runtime::ASM::blr();
}